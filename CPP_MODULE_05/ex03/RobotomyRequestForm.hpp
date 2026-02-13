/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 03:16:53 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/09 03:34:19 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include <iostream>
#include <exception>
#include <cstdlib> // std::srand
#include <ctime> // std::time
#include "AForm.hpp"

// RobotomyRequestForm class
class   RobotomyRequestForm : public AForm {
        private:
            std::string _target;
        public:
            RobotomyRequestForm();
            RobotomyRequestForm(std::string target);
            RobotomyRequestForm(const RobotomyRequestForm& other);
            RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
            ~RobotomyRequestForm();

            std::string getTarget() const;
            void        execute(Bureaucrat const & executor) const;
};

#endif