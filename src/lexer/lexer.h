#ifndef LEXER_HEADER_GUARD
#define LEXER_HEADER_GUARD

#include "../token/token.h"
#include <vector>

using namespace std;

class Lexer {
public:
	static vector<Token> getTokens(string data);
	vector<string> getKeywords(string data);
	Token getTokenFromKeyword(string keyword);
};

#endif