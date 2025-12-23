/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:34:02 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/23 16:11:58 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    int     i;
    Zombie *ZomHorde;
    
    if (N < 1)
        return (NULL);
    ZomHorde = new Zombie[N];
    i = 0;
    while (i < N)
    {
        ZomHorde[i].setname(name);
        i++;
    }
    return (ZomHorde);
}
