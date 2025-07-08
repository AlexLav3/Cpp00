#pragma once
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <cstring>

class PhoneBook
{
public:
    void addContact();
    void searchContact();

private:
    Contact contacts[8];
    int index = 0;
    void displayAll();
    int displayLenght(int column_len, int info, int ind);
};
