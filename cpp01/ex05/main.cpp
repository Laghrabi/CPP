/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:22:07 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/16 16:32:01 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl myHarl;

    myHarl.complain("DEBUG");
    myHarl.complain("INFO");
    myHarl.complain("WARNING");
    myHarl.complain("ERROR");
    myHarl.complain("1337");
    return (0);
}
