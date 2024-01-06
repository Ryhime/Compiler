#include "TokenGenerator.h"
#include <stdlib.h>

#define TRUE 1

extern FILE *yyin;
extern int yylex();
extern char *yytext;

void tokenListToString(TokenList_t* list){
    TokenNode_t* curr = list->head;
    while (curr){
        printf("%d",curr->tokenType);
        if (curr->next!=NULL) printf("->");
        curr = curr->next;
    }
    printf("\n");
}

TokenList_t* generateTokens(FILE* toTokenize){
    yyin = toTokenize;
    if (!yyin){
        printf("Could not open file!\n");
        return NULL;
    }
    // Create Token List
    TokenList_t* tokens = calloc(1,sizeof(TokenList_t));
    tokens->length = 0;
    tokens->head = NULL;
    tokens->tail = NULL;
    while (TRUE){
        Token_t t = yylex();

        // Add token
        TokenNode_t* toAdd = calloc(1,sizeof(TokenNode_t));
        toAdd->next = NULL;
        toAdd->tokenType = t;

        if (tokens->head==NULL){
            tokens->head = toAdd;
            tokens->tail = toAdd;
        }
        else{
            tokens->tail->next = toAdd;
            tokens->tail = toAdd;
        }
        tokens->length+=1;
        if (t==TOKEN_EOF) break;
    }
    return tokens;
}