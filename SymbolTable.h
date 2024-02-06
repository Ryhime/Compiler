#include "ASTGenerator.h"
// NOTE: Need levels to this tree (don't know how to implement just yet)
//   Since tables need to look above and below
typedef struct symbolTable{
    struct symbolTableEntry* head;
} SymbolTable;

typedef struct symbolTableEntry{
    Symbol* symbol;
    DeclarationType symbolType;
    union symbolValue* value;
    struct symbolTableEntry* next;
} SymbolTableEntry;


typedef union symbolValue{
    int integer;
    float floating;
    char character;
    int boolean;
} SymbolValue;

SymbolTable* createSymbolTable();
void addSymbolToSymbolTable(SymbolTable* symbolTable, Symbol* symbol, DeclarationType type,
    int integer, float floating, char character, int boolean);
    
SymbolTableEntry* getSymbolFromTable(SymbolTable* symbolTable, Symbol* symbol);

void updateSymbolInSymbolTable(SymbolTable* symbolTable, Symbol* symbol, 
    int integer, float floating, char character, int boolean);
void printSymbolTable(SymbolTable* symbolTable);