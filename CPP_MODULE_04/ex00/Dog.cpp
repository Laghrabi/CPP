/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 01:19:04 by claghrab          #+#    #+#             */
/*   Updated: 2026/01/06 02:08:40 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    _type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}

void    Dog::makeSound(void) const
{
    std::cout << this->getType() << " sound is: [Woof]" << std::endl;
}
