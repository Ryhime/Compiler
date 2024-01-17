%{
    #include "Token.h"
%}
DIGIT [0-9]
LETTER [a-zA-Z]
%%
(" "|\t|\n)
if {return TOKEN_IF;}
while {return TOKEN_WHILE;}
for {return TOKEN_FOR;}
int {return TOKEN_INT_KEYWORD;}
float {return TOKEN_FLOAT_KEYWORD;}



\+ {return TOKEN_ADD;}
- {return TOKEN_MINUS;}
\* {return TOKEN_MUL;}
\\|\/ {return TOKEN_DIV;}




{LETTER}+ {return TOKEN_IDENT;}
{DIGIT}+ {return TOKEN_INT;}
\( {return TOKEN_LPAREN;}
\) {return TOKEN_RPAREN;}
; {return TOKEN_SEMI;}


. {return TOKEN_ERROR;}

%%