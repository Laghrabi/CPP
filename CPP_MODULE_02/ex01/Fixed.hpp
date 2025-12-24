/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 13:25:11 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/26 15:05:35 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
		private:
			int					_fixedPointValue;
			static const int	_fractionalBits;
		public:
			Fixed();
            Fixed(const int value);
            Fixed(const float value);
			Fixed(const Fixed& other);
			Fixed& operator=(const Fixed& other);
			~Fixed();

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
            float   toFloat(void) const;
            int     toInt(void) const;
        };
std::ostream& operator<<(std::ostream& o, Fixed const & Fixed);

#endif