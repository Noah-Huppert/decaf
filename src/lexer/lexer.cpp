#include "<iostream>"
#include "lexer.h"

class Lexer{
    std::vector<Token> Lexer::getTokens(String data){
        std::vector<String> keywords = getKeywords(data);

        std::cout << keywords;
    }

    std::vector<String> Lexer::getKeywords(String data){
        std::vector<String> keywords;

        String currentKeyword = "";

        for(int i = 0; i < data.length(); i++){
            String c = data[i];

            if(c != " "){
                currentKeyword += c;
            } else{
                keywords.push_back(currentKeyword);
                currentKeyword = "";
            }
        }

        return keywords;
    }

    Token Lexer::getTokenFromKeyword(String keyword){

    }
};