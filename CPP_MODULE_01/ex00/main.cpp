/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 16:54:57 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/23 16:57:10 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *myZom;

    myZom = newZombie("Foo");
    myZom->announce();
    randomChump("Zoo");
    delete(myZom);
    return (0);
}
