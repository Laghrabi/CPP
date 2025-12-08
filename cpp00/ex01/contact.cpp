/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 16:46:30 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/05 16:46:32 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "contact.hpp"

Contact::Contact()
{
    FirstName = "";
    LastName = "";
    NickName = "";
    PhoneNumber = "";
    DarkestSecret = "";
}

std::string Contact::getFirstName()
{
    return (FirstName);
}

void Contact::setFirstName(std::string input)
{
	FirstName = input;
}

std::string Contact::getLastName()
{
    return (LastName);
}

void Contact::setLastName(std::string input)
{
	LastName = input;
}

std::string Contact::getNickName()
{
    return (NickName);
}

void Contact::setNickName(std::string input)
{
	NickName = input;
}

std::string Contact::getPhoneNumber()
{
    return (PhoneNumber);
}

void Contact::setPhoneNumber(std::string input)
{
	PhoneNumber = input;
}

std::string Contact::getDarkestSecret()
{
    return (DarkestSecret);
}

void Contact::setDarkestSecret(std::string input)
{
	DarkestSecret = input;
}
