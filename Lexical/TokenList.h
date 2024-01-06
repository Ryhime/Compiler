#include "token.h"
typedef struct TokenNode{
    struct TokenNode* next;
    Token_t tokenType;

} TokenNode_t;

typedef struct TokenList{
    int length;
    TokenNode_t* head;
    TokenNode_t* tail;
} TokenList_t;