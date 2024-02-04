#include "ASTGenerator.h"
// NOTE: Need levels to this tree (don't know how to implement just yet)
//   Since tables need to look above and below
typedef struct symbolTable{
    struct symbolTableEntry* head;
} SymbolTable;

typedef struct symbolTableEntry{
    Symbol* symbol;
    DeclarationType symbolType;
    struct symbolTableEntry* next;
} SymbolTableEntry;

SymbolTable* createSymbolTable();
void addSymbolToSymbolTable(SymbolTable* symbolTable, Symbol* symbol, DeclarationType type);
SymbolTableEntry* getSymbolFromTable(SymbolTable* symbolTable, Symbol* symbol);