%{
    #include "Token.h"
%}
DIGIT [0-9]
LETTER [a-zA-Z]
%%
(" "|\t|\n|\/\/.*(\n)*)

(\/\*(.*(\n)*)*\*\/)
if {return TOKEN_IF;}
while {return TOKEN_WHILE;}
for {return TOKEN_FOR;}
int {return TOKEN_INT_KEYWORD;}
float {return TOKEN_FLOAT_KEYWORD;}
char {return TOKEN_CHAR_KEYWORD;}


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
; {return TOKEN_SEMI;}


. {return TOKEN_ERROR;}

%%