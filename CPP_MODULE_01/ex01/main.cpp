/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:54:57 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/23 16:22:36 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *myZom;
    int i;

    myZom = zombieHorde(3, "Foo");
    i = 0;
    while (i < 3)
    {
        myZom[i].announce();
        i++;
    }
    delete[] myZom;
    return (0);
}
