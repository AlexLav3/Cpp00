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
    std::cin >> search_ind;

    if(search_ind <= 8 && !contacts[search_ind].isEmpty())
    {
        std::cout << "First name: " << contacts[search_ind].getInfo(Contact::FIRST) << "\n";
        std::cout << "Last name: " << contacts[search_ind].getInfo(Contact::LAST) << "\n";
        std::cout << "Nickname: " << contacts[search_ind].getInfo(Contact::NICK) << "\n";
        std::cout << "Number: " << contacts[search_ind].getInfo(Contact::NUM) << "\n";
        std::cout << "Darkest secret: " << contacts[search_ind].getInfo(Contact::SECRET)<< "\n";
    }
    else 
        std::cout << "wrong index\n";
}

//to correct alignment (the .)
void PhoneBook::displayAll()
{
    int col_lenght = 10; 

    index = 0;
    for (int index = 0; index < 8; ++index)
    {   
        if (!contacts[index].isEmpty())
        {
            for(int i = 0; i < (col_lenght - index); i++)
                std::cout << " ";
            std::cout << index << "|";
            for(int i = 0; i < (displayLenght(col_lenght, contacts[index].infoLenght(Contact::FIRST))); i++)
                std::cout << " ";
            std::cout << contacts[index].getInfo(Contact::FIRST) << "|";

            for(int i = 0; i < displayLenght(col_lenght,contacts[index].infoLenght(Contact::LAST)); i++)
                std::cout << " ";
            std::cout << contacts[index].getInfo(Contact::LAST) << "|";

            for(int i = 0; i <  displayLenght(col_lenght, contacts[index].infoLenght(Contact::NICK)); i++)
                std::cout << " ";
            std::cout << contacts[index].getInfo(Contact::NICK)<< "|";
            std::cout << std::endl;
        }
    }

}

int PhoneBook::displayLenght(int column_len, int info_len)
{
    return column_len - info_len;
}

