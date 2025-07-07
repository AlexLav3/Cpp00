#pragma once
#include <iostream>

//: first name, last name, nickname, phone number, and darkest secret.
class Contact
{
public:
    std::string getInfo();

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
};