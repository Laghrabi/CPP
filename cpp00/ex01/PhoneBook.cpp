#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}
void    PhoneBook::add()
{
    std::string input;

    input = "";
    while (input == "")
    {
        std::cout << "Enter First Name: ";
        getline(std::cin, input);
        ArrOfCon[index].setFirstName(input);
    }
    input = "";
    while (input == "")
    {
        std::cout << "Enter Last Name: ";
        getline(std::cin, input);
        ArrOfCon[index].setLastName(input);
    }
    input = "";
    while (input == "")
    {
        std::cout << "Enter Nickname: ";
        getline(std::cin, input);
        ArrOfCon[index].setNickName(input);
    }
    input = "";
    while (input == "")
    {
        std::cout << "Enter Phone Number: ";
        getline(std::cin, input);
        ArrOfCon[index].setPhoneNumber(input);
    }
    input = "";
    while (input == "")
    {
        std::cout << "Enter Darkest Secret: ";
        getline(std::cin, input);
        ArrOfCon[index].setDarkestSecret(input);
    }
    index++;
    index %= 8;
}
