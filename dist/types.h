#ifndef TYPEDEFS_H
#define TYPEDEFS_H

typedef enum {
	TOKEN_KEYWORD,
	TOKEN_OPERATOR,
	TOKEN_IDENTIFIER,
	TOKEN_LITERAL,
	TOKEN_NUMBER,
	TOKEN_PUNCTUATION,
	TOKEN_ERROR,
	TOKEN_EOF,
} TokenType;

typedef enum {
	KEYWORD_IF,
	KEYWORD_ELSE,
	KEYWORD_FOR,
	KEYWORD_RETURN,
} keywords;

// a token can be a maximum of 256 chars
typedef struct {
	TokenType type;
	char val[256];
} Token;

#endif