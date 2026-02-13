/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 17:16:14 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/13 17:38:23 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other) 
{
    (void)other;
}

Intern& Intern::operator=(const Intern& other) 
{
    (void)other;
    return (*this);
}

Intern::~Intern()  {}

static AForm* makeShrubbery(const std::string& target)
{
    return (new ShrubberyCreationForm(target));
}

static AForm* makeRobotomy(const std::string& target)
{
    return (new RobotomyRequestForm(target));
}

static AForm* makePardon(const std::string& target)
{
    return (new PresidentialPardonForm(target));
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    
    AForm* (*funcPtrs[])(const std::string&) = {
        &makeShrubbery,
        &makeRobotomy,
        &makePardon
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (funcPtrs[i](target));
        }
    }
    std::cout << "Intern cannot create " << formName << " because it doesn't exist." << std::endl;
    return (NULL);
}
