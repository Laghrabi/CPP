/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 01:08:44 by claghrab          #+#    #+#             */
/*   Updated: 2026/01/06 02:08:30 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    _type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

void    Cat::makeSound(void) const
{
    std::cout << this->getType() << " sound is: [Meeoow]" << std::endl;
}
