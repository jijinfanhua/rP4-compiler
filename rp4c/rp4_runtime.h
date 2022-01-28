#pragma once

#include "rp4_compiler.h"
#include "ipsa_output.h"
#include "ipsa_builder.h"
#include <fstream>

class Rp4Task {
public:
    IpsaBuilder builder;
    Rp4Compiler compiler;
    Rp4Task() {}
    void allocateParsers() { builder.allocateParsers(); }
    void allocateMemory() { builder.allocateMemory(); }
    void allocateProcessors() { builder.allocateProcessors(); }
    int load(std::string rp4_filename) {
        if (int x = compiler.parse(rp4_filename.c_str()); x == 0) {
            builder.load(compiler.ast.get());
            return 0;
        } else {
            return x;
        }
    }
    void output_all(std::string json_filename) {
        std::ofstream output(json_filename.c_str());
        IpsaOutput out(output);
        out.emit(builder.ipsa.toIpsaValue());
        output.close();
    }
};

class Rp4Runtime {
public:
    std::unique_ptr<Rp4Task> now_task;
    std::unique_ptr<Rp4Task> next_task;
    Rp4Runtime(): now_task(nullptr), next_task(nullptr) {}
    void emitTask(std::string rp4_filename, std::string json_filename);
};

void Rp4Runtime::emitTask(std::string rp4_filename, std::string json_filename) {
    if (now_task.get() == nullptr) {
        // never be called previously
        now_task = std::make_unique<Rp4Task>();
        now_task->load(rp4_filename);
        now_task->allocateParsers();
        now_task->allocateMemory();
        now_task->allocateProcessors();
        now_task->output_all(rp4_filename);
    } else {
        // has been called previously
        next_task = std::make_unique<Rp4Task>();
        next_task->load(rp4_filename);
        
    }
}