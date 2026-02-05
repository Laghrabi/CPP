/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:48:45 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/05 02:39:56 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>

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