#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"

class PhoneBook
{
    private:
        Contact     ArrOfCon[8];
        int         _index;

        std::string _formatColumn(std::string str); 
        void        _displayTable();
        int         _readInputIndex();

    public:
        PhoneBook();
        void    add();
        void    search();
};

#endif