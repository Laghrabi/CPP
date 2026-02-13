/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 03:32:43 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/13 17:01:17 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _GradeToSign(150), _GradeToExecute(150) {}

AForm::AForm(std::string name, int GradeToSign, int GradeToExecute) : _name(name),
            _GradeToSign(GradeToSign), _GradeToExecute(GradeToExecute)
{
    if (GradeToSign < 1 || GradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if ( GradeToSign > 150 || GradeToExecute > 150)
		throw AForm::GradeTooLowException();
	this->_signed = false;
}

AForm::AForm(const AForm& other) : _name(other._name),
            _GradeToSign(other._GradeToSign), _GradeToExecute(other._GradeToExecute) {}

AForm& AForm::operator=(const AForm& other)
{
    if (this != &other)
        _signed = other._signed;
    return (*this);
}

AForm::~AForm() {}

std::string AForm::getName() const
{
    return (_name);
}

bool    AForm::getSigned() const
{
    return (_signed);
}

unsigned int AForm::getGradeToSign() const
{
    return (_GradeToSign);
}

unsigned int AForm::getGradeToExecute() const
{
    return (_GradeToExecute);
}
void		AForm::beSigned(const Bureaucrat & src )
{
	if (src.getGrade() > this->_GradeToSign)
		throw  AForm::GradeTooLowException();
	this->_signed = true;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high! Maximum is 1.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low! Minimum is 150.");
}

const char* AForm::NotSignedException::what() const throw()
{
    return ("Form is not signed!");
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "AForm " << form.getName() 
       << ", signed: " << (form.getSigned() ? "yes" : "no")
       << ", sign grade: " << form.getGradeToSign()
       << ", exec grade: " << form.getGradeToExecute();
    return (os);
}
