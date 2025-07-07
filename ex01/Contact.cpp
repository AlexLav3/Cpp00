#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string Contact::getInfo(int info) const
{
    if (info == FIRST)
        return first_name;
    else if (info == LAST)
        return last_name;
    else if (info == NICK)
        return last_name;
    else if (info == SECRET)
        return darkest_secret;
    else
        return "";
}

void Contact::setContInfo(int info, std::string &str)
{
    if (info == FIRST)
        first_name = str;
    else if (info == LAST)
        last_name = str;
    else if (info == NICK)
        last_name = str;
    else if (info == SECRET)
        darkest_secret = str;
    else 
        return;
}
