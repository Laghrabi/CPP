/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 02:49:54 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/05 03:32:07 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

// Form Class

class   Form {
        private:
            const std::string   _name;
            bool                _signed;
            int                 _GradeToSign;
            int                 _GradeToExecute;
        public:
            Form();
            Form(std::string name, int GradeToSign, int GradeToExecute);
            Form(const Form& other);
            Form& operator=(const Form& other);
            ~Form();

            std::string getName() const;
            bool    getSigned() const;
            int     getGradeToSign() const;
            int     getGradeToExecute() const;
            void    beSigned(Bureaucrat& src);
            
            class GradeTooLowException: public std::exception {
		        virtual	const char* what() const throw();
	        };
		    class GradeTooHighException: public std::exception {
		    	virtual	const char* what() const throw();
		    };
};

std::ostream&   operator<<( std::ostream& os, Form& form );

#endif