bison --defines=Token.h --output=Parser.c Parser.bison
flex Scanner.flex
gcc -o Parser lex.yy.c Parser.c ASTGenerator.c SymbolTable.c ErrorHandler.c
./Parser.exe