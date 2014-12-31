#ifndef LEXER_HEADER_GUARD
#define LEXER_HEADER_GUARD

#include "../token/token.h"

#include <vector>

class Lexer {
public:
    static std::vector<Token> getTokens(String data);
    std::vector<String> getKeywords(String data);
    Token getTokenFromKeyword(String keyword);
};

#endif