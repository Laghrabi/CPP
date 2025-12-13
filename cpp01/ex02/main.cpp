/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 14:08:53 by claghrab          #+#    #+#             */
/*   Updated: 2025/12/13 14:18:13 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string =  "HI THIS IS BRAIN";
    std::string &stringREF = string;
    std::string *stringPTR = &string;

    std::cout << &string << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << string << std::endl;
    std::cout << stringREF << std::endl;
    std::cout << *stringPTR << std::endl;
    return (0);
}