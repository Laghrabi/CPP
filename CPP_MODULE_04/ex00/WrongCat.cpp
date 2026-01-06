/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 01:40:15 by claghrab          #+#    #+#             */
/*   Updated: 2026/01/06 02:09:15 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    _type = "WrongCat";
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << this->getType() << " sound is: [WrongCat sound]" << std::endl;
}
