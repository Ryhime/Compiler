typedef enum{
    ERROR_VAR_ALREADY_EXISTS,
    ERROR_VAR_DNE
} ErrorType;

typedef struct errorTable{
    struct errorTableEntry* head;
} ErrorTable;

typedef struct errorTableEntry{
    ErrorType type;
    char* text;
    struct errorTableEntry* next;
} ErrorTableEntry;

ErrorTable* createErrorTable();
void addErrorEntryToTable(ErrorTable* errorTable, ErrorType type, char* text);
void printErrorTable(ErrorTable* errorTable);