/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 23:40:57 by claghrab          #+#    #+#             */
/*   Updated: 2026/01/06 02:07:21 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copy Constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

void    Animal::makeSound(void) const
{
    std::cout << "This Animal is mute." << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}