typedef enum{
    TOKEN_EOF=0,
    // Keywords
    TOKEN_IF,
    TOKEN_WHILE,
    TOKEN_FOR,

    TOKEN_INT_KEYWORD,
    TOKEN_FLOAT_KEYWORD,
    // Operators
    TOKEN_ADD,
    TOKEN_SUBTRACT,
    TOKEN_MULTIPLY,
    TOKEN_DIVIDE,
    // Contants/Others
    TOKEN_IDENT,
    TOKEN_NUMBER,
    TOKEN_OPEN_PARA,
    TOKEN_CLOSED_PARA,
    TOKEN_OPEN_CURLY,
    TOKEN_CLOSED_CURLY,
    TOKEN_SEMICOLON,
    // Error
    TOKEN_ERROR,
} Token_t;