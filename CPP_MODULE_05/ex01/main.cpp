/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 22:10:06 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/08 22:10:09 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    // ---------------------------------------------------
    // TEST 1: Form Creation (Valid & Invalid)
    // ---------------------------------------------------
    std::cout << "--- TEST 1: Form Creation ---" << std::endl;
    try {
        Form tax("Tax Return", 50, 20);
        std::cout << "Created: " << tax << std::endl;
    } catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try {
        // Try to create a form with grade 0 (Too High)
        Form impossible("Impossible Form", 0, 20); 
    } catch (std::exception &e) {
        std::cout << "Exception caught (Too High): " << e.what() << std::endl;
    }

    try {
        // Try to create a form with grade 151 (Too Low)
        Form useless("Useless Form", 151, 20);
    } catch (std::exception &e) {
        std::cout << "Exception caught (Too Low): " << e.what() << std::endl;
    }

    // ---------------------------------------------------
    // TEST 2: Signing Success (High Rank Bureaucrat)
    // ---------------------------------------------------
    std::cout << "\n--- TEST 2: Successful Signing ---" << std::endl;
    try {
        Bureaucrat boss("Boss", 1);
        Form contract("Contract", 50, 50);

        std::cout << "Before: " << contract << std::endl;
        
        // Bureaucrat attempts to sign
        boss.signForm(contract);
        
        std::cout << "After:  " << contract << std::endl;
    } catch (std::exception &e) {
        std::cout << "Unexpected error: " << e.what() << std::endl;
    }

    // ---------------------------------------------------
    // TEST 3: Signing Failure (Low Rank Bureaucrat)
    // ---------------------------------------------------
    std::cout << "\n--- TEST 3: Failed Signing ---" << std::endl;
    try {
        Bureaucrat intern("Intern", 150); // Lowest rank
        Form classified("Top Secret", 1, 1); // Highest requirement

        std::cout << intern << std::endl;
        std::cout << classified << std::endl;

        // This should NOT crash. 
        // The Bureaucrat::signForm() method should catch the exception internally
        // and print "Intern couldn't sign Top Secret because..."
        intern.signForm(classified);

        // Verify the form is still unsigned
        std::cout << "Form status: " << classified << std::endl;
    } catch (std::exception &e) {
        // We shouldn't reach here if signForm handles the exception correctly!
        std::cout << "CRITICAL FAIL: signForm didn't catch the exception!" << std::endl;
    }

    return 0;
}
