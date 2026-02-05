/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 01:30:42 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/05 02:40:16 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(unsigned int grade) : _name("default")
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this != &other)
        _grade = other._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat() {}

unsigned int Bureaucrat::getGrade() const
{
    return (_grade);
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

void    Bureaucrat::decrementGrade()
{
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void    Bureaucrat::incrementGrade()
{
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high! Maximum is 1.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low! Minimum is 150.");
}

std::ostream& operator<< (std::ostream& o, Bureaucrat& bo)
{
    o << bo.getName() << ", bureaucrat grade " << bo.getGrade();
    return (o);
}
