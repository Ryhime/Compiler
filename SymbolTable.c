#include "SymbolTable.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

SymbolTable* createSymbolTable(){
    return calloc(sizeof(SymbolTable),1);
}

void addSymbolToSymbolTable(SymbolTable* symbolTable, Symbol* symbol, DeclarationType type,
    int integer, float floating, char character, int boolean, int isFunction){
    SymbolTableEntry* entry = calloc(sizeof(SymbolTableEntry),1);
    entry->symbol = symbol;
    entry->symbolType = type;
    entry->next = NULL;
    entry->value = calloc(sizeof(SymbolValue),1);
    entry->isFunction = isFunction;
    switch (type){
        case DECLARE_INT:
            entry->value->integer = integer;
            break;
        case DECLARE_FLOAT:
            entry->value->floating = floating;
            break;
        case DECLARE_CHAR:
            entry->value->character = character;
            break;
        case DECLARE_BOOL:
            entry->value->boolean = boolean;
            break;
        case DECLARE_VOID:
            break;
        default:
            printf("NOT IMPLEMENTED YET!\n");
    }

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

void updateSymbolInSymbolTable(SymbolTable* symbolTable, Symbol* symbol, 
    int integer, float floating, char character, int boolean){
        SymbolTableEntry* foundSymbolInTable = getSymbolFromTable(symbolTable,symbol);
        switch (foundSymbolInTable->symbolType){
            case DECLARE_INT:
                foundSymbolInTable->value->integer = integer;
                break;
            case DECLARE_FLOAT:
                foundSymbolInTable->value->floating = floating;
                break;
            case DECLARE_CHAR:
                foundSymbolInTable->value->character = character;
                break;
            case DECLARE_BOOL:
                foundSymbolInTable->value->boolean = boolean;
                break;
            default:
                printf("NOT IMPLEMENTED YET!\n");
        }
    }

void printSymbolTable(SymbolTable* symbolTable){
    SymbolTableEntry* entry = symbolTable->head;
    while (entry!=NULL){
        switch (entry->symbolType){
            case DECLARE_INT:
                printf("int ");
                break;
            case DECLARE_FLOAT:
                printf("float ");
                break;
            case DECLARE_CHAR:
                printf("char ");
                break;
            case DECLARE_BOOL:
                printf("bool ");
                break;
            case DECLARE_VOID:
                printf("void ");
                break;
            default:
                printf("NOT IMPLEMENTED YET!\n");
        }
        printf("%s = ",entry->symbol->name);
        if (entry->isFunction) printf("Function");
        else{
            switch (entry->symbolType){
                case DECLARE_INT:
                    printf("%d",entry->value->integer);
                    break;
                case DECLARE_FLOAT:
                    printf("%.6f",entry->value->floating);
                    break;
                case DECLARE_CHAR:
                    printf("%c",entry->value->character);
                    break;
                case DECLARE_BOOL:
                    if (entry->value->boolean) printf("true");
                    else printf("false");
                    break;
                case DECLARE_VOID:
                    printf("void");
                    break;
                default:
                    printf("NOT IMPLEMENTED YET!\n");
            }
        }

        printf("\n");
        entry = entry->next;
    }
}