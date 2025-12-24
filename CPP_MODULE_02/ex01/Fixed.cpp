/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 13:37:34 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/26 15:13:58 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed()
{
    std::cout << "Fixed Default Constructor called" << std::endl;
    _fixedPointValue = 0;
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Fixed Copy Constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int value)
{
	std::cout << "Fixed Int Constructor called" << std::endl;
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Fixed Float Constructor called" << std::endl;
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
    if (this != &other)
        this->_fixedPointValue = other.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Fixed Deconstructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

int	Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (float)(1 << _fractionalBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & Fixed)
{
    o << Fixed.toFloat();
    return o;
}
