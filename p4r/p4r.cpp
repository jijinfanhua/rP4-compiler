#include "../json.hpp"
using json = nlohmann::json;

#include "p4_json.h"
#include <fstream>

json j;
P4Json p4;

P4Headers& P4Field::vh = p4.headers;

std::string safe_convert(json j) {
    if (j.is_null()) {
        return "";
    } else {
        return j.get<std::string>();
    }
}

void extract_header_types() {
    for (auto& header_type_json : j.at("header_types")) {
        P4HeaderType header_type;
        header_type.name = header_type_json.at("name").get<std::string>();
        for (auto & field_json : header_type_json.at("fields")) {
            P4HeaderField field;
            field.name = field_json.at(0).get<std::string>();
            field.width = field_json.at(1).get<int>();
            header_type.fields.push_back(field);
        }
        p4.header_types.push_back(header_type);
    }
}

void extract_headers() {
    for (auto & header_json : j.at("headers")) {
        P4Header header;
        header.name = header_json.at("name").get<std::string>();
        header.id = header_json.at("id").get<int>();
        header.header_type_name = header_json.at("header_type").get<std::string>();
        header.metadata = header_json.at("metadata").get<bool>();
        p4.headers.push_back(header);
    }
}

void extract_parsers() {
    for (auto & parser_json : j.at("parsers")) {
        P4Parser parser;
        parser.name = parser_json.at("name").get<std::string>();
        parser.init_state = parser_json.at("init_state").get<std::string>();
        for (auto & parse_state_json : parser_json.at("parse_states")) {
            P4ParseState parse_state;
            parse_state.name = parse_state_json.at("name");
            for (auto & parse_op_json : parse_state_json.at("parser_ops")) {
                ParserOperation parser_op;
                parser_op.parameter_name = parse_op_json.at("parameters").at(0).at("value");
                parse_state.parser_ops.push_back(parser_op);
            }
            for (auto & transition_json : parse_state_json.at("transitions")) {
                Transition transition;
                transition.value = transition_json.at("value").get<std::string>();
                transition.mask = safe_convert(transition_json.at("mask"));
                transition.next_state = safe_convert(transition_json.at("next_state"));
                parse_state.transitions.push_back(transition);
            }
            for (auto & transition_key_json : parse_state_json.at("transition_key")) {
                TransitionKey transition_key;
                for (auto & value : transition_key_json.at("value")) {
                    transition_key.value.push_back(value.get<std::string>());
                }
                parse_state.transition_key.push_back(transition_key);
            }
            parser.parse_states.push_back(parse_state);
        }
        p4.parsers.push_back(parser);
    }
}

P4PrimitiveParamter extract_primitive_parameter(json j) {
    P4PrimitiveParamter pp;
    pp.type = j.at("type").get<std::string>();
    if (pp.type =="field") {
        for (auto & value : j.at("value")) {
            pp.field_value.push_back(value);
        }
    } else if (pp.type == "runtime_data") {
        pp.runtime_data_value = j.at("value").get<int>();
    } else if (pp.type == "hexstr") {
        pp.hexstr_value = j.at("value").get<std::string>();
    } else if (pp.type == "header") {
        pp.header_value = j.at("value").get<std::string>();
    } else if (pp.type == "expression") {
        auto & nested = j.at("value");
        if (nested.find("type") != std::end(nested)) {
            return extract_primitive_parameter(nested);
        } else {
            auto exp = new P4Expression();
            exp->op = nested.at("op").get<std::string>();
            exp->left = (nested.at("left").is_null() ? nullptr : new P4PrimitiveParamter(extract_primitive_parameter(nested.at("left"))));
            exp->right = (nested.at("right").is_null() ? nullptr : new P4PrimitiveParamter(extract_primitive_parameter(nested.at("right"))));
            pp.expression_value = exp;
        }
    }
    return pp;
}

P4ConditionalParameter extract_conditional_parameter(json j) {
    P4ConditionalParameter cp;
    cp.type = j.at("type").get<std::string>();
    if (cp.type == "expression") {
        auto& nested = j.at("value");
        if (nested.find("type") != std::end(nested)) {
            return extract_conditional_parameter(nested);
        } else {
            auto exp = new P4ConditionalExpression();
            exp->op = nested.at("op").get<std::string>();
            exp->left = (nested.at("left").is_null() ? nullptr : new P4ConditionalParameter(extract_conditional_parameter(nested.at("left"))));
            exp->right = (nested.at("right").is_null() ? nullptr : new P4ConditionalParameter(extract_conditional_parameter(nested.at("right"))));
            cp.expression_value = exp; 
        }
    } else if (cp.type == "field") {
        for (auto & field_json : j.at("value")) {
            cp.field_value.push_back(field_json.get<std::string>());
        }
    }
    return cp;
}

void extract_actions() {
    for (auto & action_json : j.at("actions")) {
        P4Action action;
        action.name = action_json.at("name").get<std::string>();
        for (auto & runtime_data_json : action_json.at("runtime_data")) {
            P4RuntimeData runtime_data;
            runtime_data.name = runtime_data_json.at("name").get<std::string>();
            runtime_data.bitwidth = runtime_data_json.at("bitwidth").get<int>();
            action.runtime_data.push_back(runtime_data);
        }
        for (auto & primitive_json : action_json.at("primitives")) {
            P4Primitive primitive;
            primitive.op = primitive_json.at("op").get<std::string>();
            for (auto & parameter_json : primitive_json.at("parameters")) {
                primitive.parameters.push_back(extract_primitive_parameter(parameter_json));
            }
            action.primitives.push_back(primitive);
        }
        p4.actions.push_back(action);
    }
}

void extract_pipelines() {
    for (auto & pipeline_json : j.at("pipelines")) {
        P4Pipeline pipeline;
        pipeline.name = pipeline_json.at("name").get<std::string>();
        for (auto & table_json : pipeline_json.at("tables")) {
            P4Table table;
            table.name = table_json.at("name").get<std::string>();
            for (auto & key_json : table_json.at("key")) {
                P4Key key;
                key.name = key_json.at("name").get<std::string>();
                key.match_type = key_json.at("match_type").get<std::string>();
                key.mask = safe_convert(key_json.at("mask"));
                table.key.push_back(key);
            }
            table.max_size = table_json.at("max_size").get<int>();
            for (auto & action_id_json : table_json.at("action_ids")) {
                table.action_ids.push_back(action_id_json.get<int>());
            }
            for (auto & action_json : table_json.at("actions")) {
                table.actions.push_back(action_json.get<std::string>());
            }
            for (auto & [key, value] : table_json.at("next_tables").items()) {
                table.next_tables[key] = safe_convert(value);
            }
            auto & default_entry_json = table_json.at("default_entry");
            table.default_entry.action_id = default_entry_json.at("action_id").get<int>();
            for (auto & action_data_json : default_entry_json.at("action_data")) {
                table.default_entry.action_data.push_back(action_data_json.get<std::string>());
            }
            pipeline.tables.push_back(table);
        }
        for (auto & conditional_json : pipeline_json.at("conditionals")) {
            P4Conditional conditional;
            conditional.name = conditional_json.at("name").get<std::string>();
            conditional.true_next = safe_convert(conditional_json.at("true_next"));
            conditional.false_next = safe_convert(conditional_json.at("false_next"));
            conditional.expression = extract_conditional_parameter(conditional_json.at("expression"));
            pipeline.conditionals.push_back(conditional);
        }
        p4.pipelines.push_back(pipeline);
    }
}

int main(int argc, char* argv[]) {
    std::ifstream(argv[1]) >> j;
    extract_header_types();
    extract_headers();
    extract_parsers();
    extract_actions();
    extract_pipelines();
    std::ofstream(argv[2]) << p4;
    return 0;
}
