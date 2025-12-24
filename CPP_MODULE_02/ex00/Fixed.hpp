/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:55:44 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/24 15:12:17 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
		private:
			int					_fixedPointValue;
			static const int	_fractionalBits;
		public:
			Fixed();
			Fixed(const Fixed& other);
			Fixed& operator=(const Fixed& other);
			~Fixed();

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
};

#endif