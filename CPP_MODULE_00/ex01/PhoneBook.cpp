#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    _index = 0;
}
void    PhoneBook::add()
{
    std::string input;

    input = "";
    while (input == "")
    {
        std::cout << "Enter First Name: ";
        if (!getline(std::cin, input))
			exit(0);
        ArrOfCon[_index].setFirstName(input);
    }
    input = "";
    while (input == "")
    {
        std::cout << "Enter Last Name: ";
        if (!getline(std::cin, input))
			exit(0);
        ArrOfCon[_index].setLastName(input);
    }
    input = "";
    while (input == "")
    {
        std::cout << "Enter Nickname: ";
        if (!getline(std::cin, input))
			exit(0);
        ArrOfCon[_index].setNickName(input);
    }
    input = "";
    while (input == "")
    {
        std::cout << "Enter Phone Number: ";
        if (!getline(std::cin, input))
			exit(0);
        ArrOfCon[_index].setPhoneNumber(input);
    }
    input = "";
    while (input == "")
    {
        std::cout << "Enter Darkest Secret: ";
        if (!getline(std::cin, input))
			exit(0);
        ArrOfCon[_index].setDarkestSecret(input);
    }
    _index++;
    _index %= 8;
}

std::string PhoneBook::_formatColumn(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return (str);
}

void    PhoneBook::_displayTable()
{
    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; i < 8; i++)
    {
        if (ArrOfCon[i].getFirstName().empty())
            break ;
        std::cout << "|" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << _formatColumn(ArrOfCon[i].getFirstName());
        std::cout << "|" << std::setw(10) << _formatColumn(ArrOfCon[i].getLastName());
        std::cout << "|" << std::setw(10) << _formatColumn(ArrOfCon[i].getNickName());
        std::cout << "|" << std::endl;
    }
    std::cout << " ------------------------------------------- " << std::endl;
}

int     PhoneBook::_readInputIndex()
{
    std::string input;
    int         index = -1;
    bool        valid = false;

    while (!valid)
    {
        std::cout << "Enter Index: ";
        if (!std::getline(std::cin, input))
            exit(0);

        if (input.empty()) 
            continue;
        
        bool isDigit = true;
        for (size_t j = 0; j < input.length(); j++) {
            if (!isdigit(input[j])) isDigit = false;
        }

        if (isDigit)
        {
            index = std::atoi(input.c_str());
            if (index >= 0 && index < 8 && !ArrOfCon[index].getFirstName().empty())
                valid = true;
            else
                std::cout << "Invalid index." << std::endl;
        }
        else
            std::cout << "Invalid input (digits only)." << std::endl;
    }
    return (index);
}

void    PhoneBook::search()
{
    _displayTable();

    int i = _readInputIndex();

    std::cout << "\n--- Contact Details ---" << std::endl;
    std::cout << "First Name:    " << ArrOfCon[i].getFirstName() << std::endl;
    std::cout << "Last Name:     " << ArrOfCon[i].getLastName() << std::endl;
    std::cout << "Nickname:      " << ArrOfCon[i].getNickName() << std::endl;
    std::cout << "Phone Number:  " << ArrOfCon[i].getPhoneNumber() << std::endl;
    std::cout << "Darkest Secret:" << ArrOfCon[i].getDarkestSecret() << std::endl;
}
