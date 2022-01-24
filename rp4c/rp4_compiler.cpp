#include "rp4_compiler.h"

int main(int argc, char* argv[]) {
    const char* input = argv[1];
    const char* output = (argc > 2 ? argv[2] : "");
    Rp4Compiler compiler;
    if (compiler.parse(input) == 0) {
        compiler.print(output);
    } else {
        std::cout << "parse error" << std::endl;
    }
    return 0;
}