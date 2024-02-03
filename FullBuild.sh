bison --defines=Token.h --output=Parser.c Parser.bison
flex Scanner.flex
gcc -o Parser lex.yy.c Parser.c ASTGenerator.c
./Parser.exe