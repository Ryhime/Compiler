%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "ASTGenerator.h"
    #define YYSTYPE Expression*
    extern char *yytext;

    int yylex(void);
    int yyerror(char* s);
    Expression* parserResult = NULL;
%}
%token TOKEN_INT
%token TOKEN_ADD
%token TOKEN_MINUS
%token TOKEN_MUL
%token TOKEN_DIV
%token TOKEN_LPAREN
%token TOKEN_RPAREN
%token TOKEN_SEMI
%token TOKEN_ERROR
%token TOKEN_EOF

%token TOKEN_IF
%token TOKEN_WHILE
%token TOKEN_FOR
%token TOKEN_INT_KEYWORD
%token TOKEN_FLOAT_KEYWORD
%token TOKEN_IDENT

%%
program : expr TOKEN_SEMI {parserResult = $1;};

expr : expr TOKEN_ADD term { $$ = createExpression(EXPR_ADD,$1,$3);}
     | expr TOKEN_MINUS term { $$ = createExpression(EXPR_SUB,$1,$3); }
     | term{$$ = $1;}
     ;

term : term TOKEN_MUL factor { $$ = createExpression(EXPR_MUL,$1,$3); }
     | term TOKEN_DIV factor { $$ = createExpression(EXPR_DIV,$1,$3); }
     | factor { $$ = $1; }
     ;

factor : TOKEN_MINUS factor { $$ = createExpression(EXPR_SUB,createExpressionValue(0),$2); }
       | TOKEN_LPAREN expr TOKEN_RPAREN { $$ = $2; }
       | TOKEN_INT { $$ = createExpressionValue(atoi(yytext)); }
       ;

%%



int yyerror(char* s){
    return 0;
}
int yywrap() {return 1;}