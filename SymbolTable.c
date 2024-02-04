#include "SymbolTable.h"
#include <stdlib.h>
#include <string.h>

SymbolTable* createSymbolTable(){
    return calloc(sizeof(SymbolTable),1);
}

void addSymbolToSymbolTable(SymbolTable* symbolTable, Symbol* symbol, DeclarationType type){
    SymbolTableEntry* entry = calloc(sizeof(SymbolTableEntry),1);
    entry->symbol = symbol;
    entry->symbolType = type;
    entry->next = NULL;
    if (symbolTable->head==NULL){
        symbolTable->head = entry;
        return;
    }


    SymbolTableEntry* curr = symbolTable->head;
    while (curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = entry;
}

SymbolTableEntry* getSymbolFromTable(SymbolTable* symbolTable, Symbol* symbol){
    SymbolTableEntry* curr = symbolTable->head;
    while (curr!=NULL){
        // Compare symbol length
        if (strlen(symbol->name)!=strlen(curr->symbol->name)){
            curr = curr->next;
            continue;
        }
        int found = 1;
        for (int i=0;i<strlen(symbol->name);i++){
            if (symbol->name[i]!=curr->symbol->name[i]){
                found = 0;
                break;
            }
        }
        if (found==0){
            curr = curr->next;
            continue;
        }
        return curr;
    }
    return NULL;
}                                                