#include "PhoneBook.hpp"

void PhoneBook::addContact()
{
    std::string first;
    std::cout << "Insert first name\n";
    std::cin >> first;

    std::string last;
    std::cout << "Insert last name\n";
    std::cin >> last;

    std::string nick;
    std::cout << "Insert nickname\n";
    std::cin >> nick;

    std::string secret;
    std::cout << "Insert secret\n";
    contacts[index].setContInfo(Contact::FIRST, first);
    contacts[index].setContInfo(Contact::LAST, last);
    contacts[index].setContInfo(Contact::NICK, nick);
    contacts[index].setContInfo(Contact::SECRET, secret);

    index = (index + 1) % 8;
}

void PhoneBook::searchContact()
{
}
