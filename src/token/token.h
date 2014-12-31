#ifndef TOKEN_HEADER_GUARD
#define TOKEN_HEADER_GUARD

#include <iostream>

using namespace std;

class Token{
private:
    int type;
    string value;

public:
	Token(int type, string value);
	~Token();

    /* Getters */
    int getType();

    string getValue();
};

#endif