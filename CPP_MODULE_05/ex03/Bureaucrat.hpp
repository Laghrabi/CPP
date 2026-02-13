/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:48:45 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/09 03:43:01 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class AForm;

// Bureaucrat Class
class	Bureaucrat {
		private:
			const std::string	_name;
			unsigned int		_grade;
		public:
			Bureaucrat(unsigned int grade);
			Bureaucrat(std::string name, unsigned int grade);
			Bureaucrat(const Bureaucrat& other);
			Bureaucrat& operator=(const Bureaucrat& other);
			~Bureaucrat();
			
			std::string		getName() const;
			unsigned int	getGrade() const;
			void			incrementGrade();
			void			decrementGrade();
			void     		signForm(AForm& form);
			void			executeForm(const AForm& form);

			class	GradeTooHighException : public std::exception {
				public:
					virtual const char* what() const throw();
			};
			
			class	GradeTooLowException : public std::exception {
				public:
					virtual const char* what() const throw();	
			};
};

std::ostream& operator<< (std::ostream& o, Bureaucrat& bo);

# endif