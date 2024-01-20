%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "ASTGenerator.h"
    #define YYSTYPE Node*
    extern char *yytext;

    int yylex(void);
    int yyerror(char* s);
    Node* parserResult = NULL;
%}
%token TOKEN_INT
%token TOKEN_FLOAT
%token TOKEN_CHAR
%token TOKEN_ADD
%token TOKEN_MINUS
%token TOKEN_MUL
%token TOKEN_DIV
%token TOKEN_EQUAL
%token TOKEN_DOUBLE_EQUAL
%token TOKEN_LESS
%token TOKEN_GREATER
%token TOKEN_LESS_EQUAL
%token TOKEN_GREATER_EQUAL

%token TOKEN_OR
%token TOKEN_AND
%token TOKEN_XOR
%token TOKEN_NOT

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
%token TOKEN_CHAR_KEYWORD
%token TOKEN_BOOL_KEYWORD
%token TOKEN_TRUE_KEYWORD
%token TOKEN_FALSE_KEYWORD
%token TOKEN_IDENT

%%
program : line { parserResult = $1; } | line program { parserResult = connectNodes($1,$2);};

line : assignment TOKEN_SEMI { $$ = $1 } | 
       declaration TOKEN_SEMI { $$ = $1 };

declaration : TOKEN_INT_KEYWORD variable { $$ = createDeclarationNode(DECLARE_INT,$2,createExpressionIntNode(0)); } 
              | TOKEN_INT_KEYWORD variable TOKEN_EQUAL expr { $$ = createDeclarationNode(DECLARE_INT,$2,$4);};
              | TOKEN_FLOAT_KEYWORD variable { $$ = createDeclarationNode(DECLARE_FLOAT,$2,createExpressionFloatNode(0)); }
              | TOKEN_FLOAT_KEYWORD variable TOKEN_EQUAL expr { $$ = createDeclarationNode(DECLARE_FLOAT,$2,$4); }
              | TOKEN_CHAR_KEYWORD variable { $$ = createDeclarationNode(DECLARE_CHAR,$2,createExpressionCharNode('a')); }
              | TOKEN_CHAR_KEYWORD variable TOKEN_EQUAL expr { $$ = createDeclarationNode(DECLARE_CHAR,$2,$4); }
              | TOKEN_BOOL_KEYWORD variable { $$ = createDeclarationNode(DECLARE_BOOL,$2,createExpressionBoolNode(0)); }
              | TOKEN_BOOL_KEYWORD variable TOKEN_EQUAL expr { $$ = createDeclarationNode(DECLARE_BOOL,$2,$4); };



assignment : variable TOKEN_EQUAL expr { $$ = createAssignmentNode($1,$3); };

variable : TOKEN_IDENT { $$ = createExpressionSymbolNode(yytext); }

expr : expr TOKEN_ADD term { $$ = createExpressionNode(EXPR_ADD,$1,$3); }
     | expr TOKEN_MINUS term { $$ = createExpressionNode(EXPR_SUB,$1,$3); }
     | TOKEN_NOT term { $$ = createExpressionNode(EXPR_NOT,$2,NULL); }
     | expr TOKEN_AND term { $$ = createExpressionNode(EXPR_AND,$1,$3); }
     | expr TOKEN_OR term { $$ = createExpressionNode(EXPR_OR,$1,$3); };
     | expr TOKEN_XOR term { $$ = createExpressionNode(EXPR_XOR,$1,$3); }
     | term{ $$ = $1; }
     ;

term : term TOKEN_MUL factor { $$ = createExpressionNode(EXPR_MUL,$1,$3); }
     | term TOKEN_DIV factor { $$ = createExpressionNode(EXPR_DIV,$1,$3); }
     | term TOKEN_DOUBLE_EQUAL factor { $$ = createExpressionNode(EXPR_EQUAL,$1,$3); }
     | term TOKEN_LESS factor { $$ = createExpressionNode(EXPR_LESS,$1,$3); }
     | term TOKEN_GREATER factor { $$ = createExpressionNode(EXPR_GREATER,$1,$3); }
     | term TOKEN_LESS_EQUAL factor { $$ = createExpressionNode(EXPR_LESS_EQUAL,$1,$3); };
     | term TOKEN_GREATER_EQUAL factor { $$ = createExpressionNode(EXPR_GREATER_EQUAL,$1,$3); }
     | factor { $$ = $1; }
     ;

factor : TOKEN_MINUS factor { $$ = createExpressionNode(EXPR_SUB,createExpressionIntNode(0),$2); }
       | TOKEN_LPAREN expr TOKEN_RPAREN { $$ = $2; }
       | TOKEN_INT { $$ = createExpressionIntNode(atoi(yytext)); }
       | TOKEN_FLOAT { $$ = createExpressionFloatNode(atof(yytext)); }
       | TOKEN_CHAR { $$ = createExpressionCharNode(yytext[1]); }
       | TOKEN_FALSE_KEYWORD { $$ = createExpressionBoolNode(0); }
       | TOKEN_TRUE_KEYWORD { $$ = createExpressionBoolNode(1); }
       | TOKEN_IDENT { $$ = createExpressionSymbolNode(yytext); }
       ;

%%



int yyerror(char* s){
    return 0;
}
int yywrap() {return 1;}