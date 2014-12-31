#ifndef TOKEN_HEADER_GUARD
#define TOKEN_HEADER_GUARD

class Token{
private:
    int type;
    String value;

public:
    token(int type, String value) : type(type), value(value) {}

    /* Getters */
    int getType();

    String getValue();
};

#endif