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
    std::cin >> secret;

    std::string num;
    std::cout << "Insert phone number\n";
    std::cin >> num;
    contacts[index].setContInfo(Contact::FIRST, first);
    contacts[index].setContInfo(Contact::LAST, last);
    contacts[index].setContInfo(Contact::NICK, nick);
    contacts[index].setContInfo(Contact::NUM, num);
    contacts[index].setContInfo(Contact::SECRET, secret);

    index = (index + 1) % 8;
}

void PhoneBook::searchContact()
{
    displayAll();
    int search_ind;
    std::cout << "Insert contact index\n";
    if(!(std::cin >> search_ind) || search_ind < 0 || search_ind >= 8)
    {
        std::cin.clear();
        std::cin.ignore(10000, '\n'); 
        std::cout << "Wrong index! >:( .\n";
        return;
    }
    else if(!contacts[search_ind].isEmpty())
    {
        std::cout << "First name: " << contacts[search_ind].getInfo(Contact::FIRST) << "\n";
        std::cout << "Last name: " << contacts[search_ind].getInfo(Contact::LAST) << "\n";
        std::cout << "Nickname: " << contacts[search_ind].getInfo(Contact::NICK) << "\n";
        std::cout << "Number: " << contacts[search_ind].getInfo(Contact::NUM) << "\n";
        std::cout << "Darkest secret: " << contacts[search_ind].getInfo(Contact::SECRET)<< "\n";
    }
    else 
        std::cout << "Contact index is empty\n";
}

void PhoneBook::displayAll()
{
    int col_lenght = 10; 

    for (int index = 0; index < 8; index++)
    {   
        if (!contacts[index].isEmpty())
        {
            for(int i = 0; i < (col_lenght - 1); i++)
                std::cout << " ";
            std::cout << index << "|";
            for(int i = 0; i < (displayLenght(col_lenght, Contact::FIRST, index)); i++)
                std::cout << " ";
            std::cout << contacts[index].dispString(Contact::FIRST, col_lenght) << "|";

            for(int i = 0; i < (displayLenght(col_lenght, Contact::LAST, index)); i++)
                std::cout << " ";
            std::cout << contacts[index].dispString(Contact::LAST, col_lenght ) << "|";

            for(int i = 0; i < (displayLenght(col_lenght, Contact::NICK, index)); i++)
                std::cout << " ";
            std::cout << contacts[index].dispString(Contact::NICK, col_lenght ) << "|";
            std::cout << std::endl;
        }
    }

}

int PhoneBook::displayLenght(int column_len, int info, int ind)
{
    int len = column_len - contacts[ind].infoLenght(info);
    if (len < 0)
        return 0;
    return len;
}