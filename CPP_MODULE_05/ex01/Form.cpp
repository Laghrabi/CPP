/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 03:32:43 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/05 04:29:23 by claghrab         ###   ########.fr       */
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
