/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:21:31 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/23 16:05:33 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class   Zombie {
    private:
       std::string	name;
	public:
		void	announce( void );
		void	setname(std::string str);
		Zombie();
		~Zombie();
};

void randomChump( std::string name);
Zombie* newZombie( std::string name);

#endif