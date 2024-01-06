#include "token.h"
#include <stdio.h>

extern FILE *yyin;
extern int yylex();
extern char *yytext;

int main(){
    yyin = fopen("program.c","r");
    if (!yyin){
        printf("Could not open file!\n");
        return 1;
    }
    while (1){
        token_t t = yylex();
        printf("TOKEN: %d and %s\n",t,yytext);
        if (t==TOKEN_EOF) break;
    }
}