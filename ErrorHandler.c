#include "ErrorHandler.h"
#include <stdlib.h>
#include <stdio.h>

ErrorTable* createErrorTable(){
    return calloc(sizeof(ErrorTable),1);
}
void addErrorEntryToTable(ErrorTable* errorTable, ErrorType type, char* text){
    ErrorTableEntry* entry = calloc(sizeof(ErrorTableEntry),1);
    entry->text = text;
    entry->type = type;

    if (errorTable->head==NULL){
        errorTable->head = entry;
        return;
    }
    ErrorTableEntry* curr = errorTable->head;
    while (curr->next!=NULL){
        curr = curr->next;
    }
    curr->next = entry;
}

void printErrorTableEntry(ErrorTableEntry* entry){
    if (entry->type==ERROR_VAR_ALREADY_EXISTS){
        printf("Variable Already Exists Error: %s already defined.\n",entry->text);
    }
    else if (entry->type==ERROR_VAR_DNE){
        printf("Variable Does Not Exists: %s not defined.\n",entry->text);
    }
}

void printErrorTable(ErrorTable* errorTable){
    ErrorTableEntry* curr = errorTable->head;
    while (curr!=NULL){
        printErrorTableEntry(curr);
        curr = curr->next;
    }
}