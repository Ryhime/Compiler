%{
    #include "Token.h"
%}
DIGIT [0-9]
LETTER [a-zA-Z]
%%
(" "|\t|\n|\/\/.*(\n)*)

(\/\*(.*(\n)*)*\*\/)
if {return TOKEN_IF_KEYWORD;}
else {return TOKEN_ELSE_KEYWORD;}
while {return TOKEN_WHILE_KEYWORD;}
for {return TOKEN_FOR_KEYWORD;}
int {return TOKEN_INT_KEYWORD;}
float {return TOKEN_FLOAT_KEYWORD;}
char {return TOKEN_CHAR_KEYWORD;}
bool {return TOKEN_BOOL_KEYWORD;}
true {return TOKEN_TRUE_KEYWORD;}
false {return TOKEN_FALSE_KEYWORD;}


== {return TOKEN_DOUBLE_EQUAL;}
\*= {return TOKEN_MUL_EQUAL;}
\+= {return TOKEN_ADD_EQUAL;}
-= {return TOKEN_SUB_EQUAL;}
(\/=)|(\\=) {return TOKEN_DIV_EQUAL;}


\< {return TOKEN_LESS;}
\> {return TOKEN_GREATER;}
\<= {return TOKEN_LESS_EQUAL;}
\>= {return TOKEN_GREATER_EQUAL;}
! {return TOKEN_NOT;}
and {return TOKEN_AND;}
or {return TOKEN_OR;}
xor {return TOKEN_XOR;}

\+ {return TOKEN_ADD;}
- {return TOKEN_MINUS;}
\* {return TOKEN_MUL;}
\\|\/ {return TOKEN_DIV;}

= {return TOKEN_EQUAL;}




{LETTER}+ {return TOKEN_IDENT;}
{DIGIT}+ {return TOKEN_INT;}
{DIGIT}*\.{DIGIT}+ {return TOKEN_FLOAT;}
\'.\' {return TOKEN_CHAR;}
\( {return TOKEN_LPAREN;}
\) {return TOKEN_RPAREN;}
\{ {return TOKEN_LCURL;}
\} {return TOKEN_RCURL;}
; {return TOKEN_SEMI;}


. {return TOKEN_ERROR;}

%%