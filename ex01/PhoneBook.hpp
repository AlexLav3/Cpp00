#pragma once
#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
public:
    void addContact();
    void searchContact();

private:
    Contact contacts[8];
    int Index;
};
