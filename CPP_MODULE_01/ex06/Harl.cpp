/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:40:04 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/23 17:00:29 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "[ DEBUG ]"
              << std::endl
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
              << std::endl;
}

void    Harl::info(void)
{
    std::cout << "[ INFO ]"
              << std::endl
              << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
              << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "[ WARNING ]"
              << std::endl
              << "I think I deserve to have some extra bacon for free.\nI've been coming for years, whereas you started working here just last month."
              << std::endl;
}

void    Harl::error(void)
{
    std::cout << "[ ERROR ]"
              << std::endl
              << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::choose_case(int i)
{
    HarlMemFn ptrs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    switch (i)
    {
        case 1:
            (this->*ptrs[0])();
            std::cout << std::endl;
        case 2:
            (this->*ptrs[1])();
            std::cout << std::endl;
        case 3:
            (this->*ptrs[2])();
            std::cout << std::endl;
        case 4:
            (this->*ptrs[3])();   
    }
}

void    Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    
    i = 0;
    while (i < 4)
    {
        if (level == levels[i])
        {
            choose_case(++i);
            return ;
        }
        i++;
    }
    if (i == 4)
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
