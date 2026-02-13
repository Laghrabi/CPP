/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:58:15 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/13 17:45:56 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

int main()
{
    // Seed the random number generator for Robotomy
    std::srand(std::time(NULL));

    // --------------------------------------------------------------------------
    // TEST 1: SHRUBBERY CREATION FORM (Low Level)
    // --------------------------------------------------------------------------
    std::cout << "\n--- TEST 1: SHRUBBERY CREATION ---" << std::endl;
    try {
        Bureaucrat gardener("Gardener", 137);
        ShrubberyCreationForm shrub("home");

        std::cout << shrub << std::endl;
        
        // Sign and Execute
        gardener.signForm(shrub);
        gardener.executeForm(shrub);
        
        std::cout << "SUCCESS: Check your directory for 'home_shrubbery' file." << std::endl;
    } 
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // --------------------------------------------------------------------------
    // TEST 2: ROBOTOMY REQUEST FORM (Mid Level + Randomness)
    // --------------------------------------------------------------------------
    std::cout << "\n--- TEST 2: ROBOTOMY REQUEST (50% Chance) ---" << std::endl;
    try {
        Bureaucrat tech("TechGuy", 45);
        RobotomyRequestForm robot("Bender");

        tech.signForm(robot);

        // Run multiple times to see success and failure
        std::cout << "Attempt 1: ";
        tech.executeForm(robot);
        
        std::cout << "Attempt 2: ";
        tech.executeForm(robot);

        std::cout << "Attempt 3: ";
        tech.executeForm(robot);

        std::cout << "Attempt 4: ";
        tech.executeForm(robot);
    } 
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // --------------------------------------------------------------------------
    // TEST 3: PRESIDENTIAL PARDON FORM (High Level)
    // --------------------------------------------------------------------------
    std::cout << "\n--- TEST 3: PRESIDENTIAL PARDON ---" << std::endl;
    try {
        Bureaucrat president("Zaphod", 5);
        PresidentialPardonForm pardon("Arthur Dent");

        president.signForm(pardon);
        president.executeForm(pardon);
    } 
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // --------------------------------------------------------------------------
    // TEST 4: ERROR HANDLING (Unsigned & Grade Too Low)
    // --------------------------------------------------------------------------
    std::cout << "\n--- TEST 4: ERROR SCENARIOS ---" << std::endl;
    
    // Scenario A: Unsigned Form
    std::cout << "[Scenario A: Unsigned Form]" << std::endl;
    try {
        Bureaucrat boss("Boss", 1);
        ShrubberyCreationForm file("garden");

        // We skip signing!
        // boss.signForm(file); 

        boss.executeForm(file); // Should fail
    } 
    catch (std::exception &e) {
        std::cout << "Expected Error: " << e.what() << std::endl;
    }

    // Scenario B: Grade Too Low to Execute
    std::cout << "\n[Scenario B: Grade Too Low]" << std::endl;
    try {
        Bureaucrat intern("Intern", 140); // Can sign (145), cannot execute (137)
        ShrubberyCreationForm file("forest");

        intern.signForm(file); // Should work
        intern.executeForm(file); // Should fail
    } 
    catch (std::exception &e) {
        std::cout << "Expected Error: " << e.what() << std::endl;
    }

    Intern someRandomIntern;
    AForm* rrf;

    // Test Valid Form
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf) {
        // Do something with the form
        Bureaucrat boss("Boss", 1);
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        
        // Clean up memory (Intern creates with 'new', you must 'delete')
        delete rrf;
    }

    // Test Invalid Form
    AForm* wrong = someRandomIntern.makeForm("coffee request", "Boss");
    if (wrong == NULL)
        std::cout << "Form creation failed as expected." << std::endl;
    
    return 0;
}
