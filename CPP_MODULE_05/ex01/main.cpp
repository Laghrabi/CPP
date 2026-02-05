/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 02:19:27 by claghrab          #+#    #+#             */
/*   Updated: 2026/02/05 02:29:54 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    // TEST 1: The "Happy Path" (Valid Operations)

    std::cout << "--- TEST 1: Valid Bureaucrat ---" << std::endl;
    try {
        Bureaucrat bob("Bob", 2);
        std::cout << bob << std::endl;

        std::cout << "Incrementing grade..." << std::endl;
        bob.incrementGrade();
        std::cout << bob << std::endl;

        std::cout << "Decrementing grade..." << std::endl;
        bob.decrementGrade();
        std::cout << bob << std::endl;
    }
    catch (std::exception &e) {
        std::cout << "Unexpected error: " << e.what() << std::endl;
    }

    // TEST 2: Constructor Fail (Grade Too Low)

    std::cout << "\n--- TEST 2: Constructor Too Low (151) ---" << std::endl;
    try {
        Bureaucrat bad("Bad", 151);
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    // TEST 3: Constructor Fail (Grade Too High)

    std::cout << "\n--- TEST 3: Constructor Too High (0) ---" << std::endl;
    try {
        Bureaucrat boss("Boss", 0);
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    // TEST 4: Increment Fail (Going above 1)

    std::cout << "\n--- TEST 4: Increment Error (1 -> 0) ---" << std::endl;
    try {
        Bureaucrat top("TopG", 1);
        std::cout << top << std::endl;
        
        std::cout << "Attempting to promote..." << std::endl;
        top.incrementGrade();
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    // TEST 5: Decrement Fail (Going below 150)

    std::cout << "\n--- TEST 5: Decrement Error (150 -> 151) ---" << std::endl;
    try {
        Bureaucrat bottom("BottomG", 150);
        std::cout << bottom << std::endl;

        std::cout << "Attempting to demote..." << std::endl;
        bottom.decrementGrade();
    }
    catch (std::exception &e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return (0);
}
