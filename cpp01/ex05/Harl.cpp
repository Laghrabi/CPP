/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:40:04 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/16 16:39:06 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
              << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
              << std::endl;
}

void    Harl::warning(void)
{
    std::cout <<  "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month."
              << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    HarlMemFn ptrs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i;
    
    i = 0;
    while (i < 4)
    {
        if (level == levels[i])
        {
            (this->*ptrs[i])();
            return ;
        }
        i++;
    }
    if (i == 4)
        std::cout << level << " is an invalid level" << std::endl;
}
