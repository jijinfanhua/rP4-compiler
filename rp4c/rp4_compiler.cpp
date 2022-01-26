#include "rp4_compiler.h"
#include "ipsa_output.h"
#include "ipsa_builder.h"

IpsaBuilder builder;

int main(int argc, char* argv[]) {
    const char* input = argv[1];
    const char* output = (argc > 2 ? argv[2] : "");
    Rp4Compiler compiler;
    if (compiler.parse(input) == 0) {
        builder.load(compiler.ast.get());
        IpsaOutput out(std::cout);
        for (auto& [name, table]: builder.table_manager.tables) {
            out.emit(table.toIpsaValue());
        }
        // for (auto& [name, action] : builder.action_manager.actions) {
        //     out.emit(action.toIpsaValue());
        // }
        // for (auto& level : builder.level_manager.levels) {
        //     out.emit(level.toIpsaValue());
        // }
        // compiler.print(output);
    } else {
        std::cout << "parse error" << std::endl;
    }
    return 0;
}