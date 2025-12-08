#pragma once

#include "contact.hpp"

class PhoneBook {
	private:
		Contact	ArrOfCon[8];
		int		index;
	public:
		void	add();
		void	search();
		void	exit();
		PhoneBook();
};
