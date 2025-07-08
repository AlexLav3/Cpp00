#pragma once
#include <iostream>

//: first name, last name, nickname, phone number, and darkest secret.
class Contact
{
public:
    enum INFO {FIRST, LAST, NICK, SECRET};
    std::string getInfo(int info) const;
    void setContInfo(int info, std::string &str);
    int infoLenght(int info);
    bool isEmpty() const;

private:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
};