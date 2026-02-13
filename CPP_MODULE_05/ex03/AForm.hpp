/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 02:49:54 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/13 17:48:02 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

// AForm Class

class   AForm {
        private:
            const std::string   _name;
            bool                _signed;
            const unsigned int                 _GradeToSign;
            const unsigned int                 _GradeToExecute;
        public:
            AForm();
            AForm(std::string name, int GradeToSign, int GradeToExecute);
            AForm(const AForm& other);
            AForm& operator=(const AForm& other);
            virtual ~AForm();

            std::string getName() const;
            bool    getSigned() const;
           unsigned int     getGradeToSign() const;
           unsigned int     getGradeToExecute() const;
            void    beSigned(const Bureaucrat& src);

            void virtual execute(Bureaucrat const & executor) const = 0;
            
            class GradeTooLowException: public std::exception {
		        virtual	const char* what() const throw();
	        };
            
		    class GradeTooHighException: public std::exception {
		    	virtual	const char* what() const throw();
		    };

            class NotSignedException : public std::exception {
                public:
                    virtual const char* what() const throw();
            };
};

std::ostream&   operator<<( std::ostream& os, const AForm& form);

#endif