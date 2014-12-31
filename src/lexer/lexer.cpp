#include <iostream>
#include "lexer.h"

using namespace std;

vector<Token> Lexer::getTokens(string data){
	vector<string> keywords = this.getKeywords(data);
}

vector<string> Lexer::getKeywords(string data){
	vector<string> keywords;

	string currentKeyword = "";

    for(int i = 0; i < data.length(); i++){
		char c = data[i];

        if(c != ' '){
            currentKeyword += c;
        } else{
            keywords.push_back(currentKeyword);
            currentKeyword = "";
        }
    }

    return keywords;
}

Token Lexer::getTokenFromKeyword(string keyword){

}