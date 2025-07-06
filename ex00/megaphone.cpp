#include <iostream>
#include <string>
#include <cctype> 

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            char *tmp = argv[i];
            while(*tmp){
                std::cout << (char)std::toupper(*tmp);
                tmp++;
            }
        }
        std::cout << std::endl;
    }
    else
        std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
}