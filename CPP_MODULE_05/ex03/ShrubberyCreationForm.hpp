/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 00:04:37 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/09 03:35:07 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "AForm.hpp"

// ShrubberyCreationForm class
class   ShrubberyCreationForm : public AForm {
        private:
            std::string _target;
        public:
            ShrubberyCreationForm();
            ShrubberyCreationForm(std::string target);
            ShrubberyCreationForm(const ShrubberyCreationForm& other);
            ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
            ~ShrubberyCreationForm();

            std::string getTarget() const;
            void        execute(Bureaucrat const & executor) const;
};

#endif