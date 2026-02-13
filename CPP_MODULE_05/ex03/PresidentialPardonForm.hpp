/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 03:31:08 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/09 03:34:12 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include <iostream>
#include <exception>

#include "AForm.hpp"

// PresidentialPardonForm class
class   PresidentialPardonForm : public AForm {
        private:
            std::string _target;
        public:
            PresidentialPardonForm();
            PresidentialPardonForm(std::string target);
            PresidentialPardonForm(const PresidentialPardonForm& other);
            PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
            ~PresidentialPardonForm();

            std::string getTarget() const;
            void        execute(Bureaucrat const & executor) const;
};

#endif