#include <cstring>
#include <fstream>
#include <iostream>

#include <antlr4-runtime.h>

#include "AngelscriptLexer.h"
#include "AngelscriptParser.h"

int main() {
    std::ifstream codeFile(CODE_PATH "/Test.as");
    if (!codeFile.is_open()) {
        std::cout << "Open Test.as failed." << std::endl;
        return EXIT_FAILURE;
    }
    antlr4::ANTLRInputStream input(codeFile);

    AngelscriptLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.fill();
    for (auto token : tokens.getTokens()) {
        std::cout << token->toString() << std::endl;
    }

    AngelscriptParser parser(&tokens);

    return EXIT_SUCCESS;
}
