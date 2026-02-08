/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 03:32:43 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/08 22:23:34 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _GradeToSign(), _GradeToExecute() {}

Form::Form(std::string name, int GradeToSign, int GradeToExecute) : _name(name),
            _GradeToSign(GradeToSign), _GradeToExecute(GradeToExecute)
{
    if (GradeToSign == 0 || GradeToExecute == 0)
		throw Form::GradeTooHighException();
	if ( GradeToSign > 150 || GradeToExecute > 150)
		throw Form::GradeTooLowException();
	this->_signed = false;
}

Form::Form(const Form& other) : _name(other._name),
            _GradeToSign(other._GradeToSign), _GradeToExecute(other._GradeToExecute) {}

Form& Form::operator=(const Form& other)
{
    if (this != &other)
        _signed = other._signed;
    return (*this);
}

Form::~Form() {}

std::string Form::getName() const
{
    return (_name);
}

bool    Form::getSigned() const
{
    return (_signed);
}

int Form::getGradeToSign() const
{
    return (_GradeToSign);
}

int Form::getGradeToExecute() const
{
    return (_GradeToExecute);
}
void		Form::beSigned( Bureaucrat & src )
{
	if (src.getGrade() > this->_GradeToSign)
		throw  Form::GradeTooLowException();
	this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high! Maximum is 1.");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low! Minimum is 150.");
}

std::ostream& operator<<(std::ostream& os, Form& form)
{
    os << "Form " << form.getName() 
       << ", signed: " << (form.getSigned() ? "yes" : "no")
       << ", sign grade: " << form.getGradeToSign()
       << ", exec grade: " << form.getGradeToExecute();
    return (os);
}
