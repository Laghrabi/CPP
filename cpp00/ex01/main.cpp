#include "PhoneBook.hpp"

int main ()
{
	std::string	command;
	PhoneBook	MyPhone;

	while (true)
	{
		getline(std::cin, command);
		if (command == "ADD")
			MyPhone.add();
		else if (command == "SEARCH")
			MyPhone.search();
		else if (command == "EXIT")
			MyPhone.exit();	
	}
}

