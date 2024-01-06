#include "Lexical/TokenGenerator.h"

int main(){
    FILE* toCompile = fopen("program.c","r");
    TokenList_t* tokens = generateTokens(toCompile);
    tokenListToString(tokens);
}