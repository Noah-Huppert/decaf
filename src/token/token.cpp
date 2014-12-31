#include "token.h";

int Token::getType(){
	return type;
}

string Token::getValue(){
	return value;
}

Token::~Token(){
	delete &type;
	delete &value;
}