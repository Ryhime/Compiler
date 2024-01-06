%{
    #include "token.h"
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
- {return TOKEN_SUBTRACT;}
\* {return TOKEN_MULTIPLY;}
\\|\/ {return TOKEN_DIVIDE;}




{LETTER}+ {return TOKEN_IDENT;}
{DIGIT}+ {return TOKEN_NUMBER;}
\( {return TOKEN_OPEN_PARA;}
\) {return TOKEN_CLOSED_PARA;}
\{ {return TOKEN_OPEN_CURLY;}
\} {return TOKEN_CLOSED_CURLY;}
; {return TOKEN_SEMICOLON;}


. {return TOKEN_ERROR;}

%%
int yywrap() {return 1;}