#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string Contact::getInfo(int info) const
{
    if (info == FIRST)
        return first_name;
    else if (info == LAST)
        return last_name;
    else if (info == NICK)
        return nickname;
    else if (info == SECRET)
        return darkest_secret;
    else if (info == NUM)
        return phone_num;
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
        nickname = str;
    else if (info == SECRET)
        darkest_secret = str;
    else if (info == NUM)
        phone_num = str;
    else 
        return;
}

int Contact::infoLenght(int info)
{
    if (info == FIRST)
        return first_name.size();
    else if (info == LAST)
        return last_name.size();
    else if (info == NICK)
        return nickname.size();
    else if (info == SECRET)
        return darkest_secret.size();
    else if (info == NUM)
        return phone_num.size();
    else
        return 0;
}
bool Contact::isEmpty() const {
    return first_name.empty() && last_name.empty() && nickname.empty() && darkest_secret.empty() && phone_num.empty();
}

//substr(pos, len);
std::string Contact::dispString(int info, int len)
{
    std::string dis_info = getInfo(info);
    int infolen = infoLenght(info);

    if (infolen > len)
        return dis_info.substr(0, len - 1) + '.';
    else
        return dis_info;
}