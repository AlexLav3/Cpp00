#pragma once
#include <iostream>

class Contact
{
public:
    enum INFO {FIRST, LAST, NICK, NUM, SECRET};
    std::string getInfo(int info) const;
    void setContInfo(int info, std::string &str);
    int infoLenght(int info);
    bool isEmpty() const;
    std::string dispString(int info, int len);

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_num;
    std::string darkest_secret;
};