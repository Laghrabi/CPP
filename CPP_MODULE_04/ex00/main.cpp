/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claghrab <claghrab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 02:01:11 by claghrab          #+#    #+#             */
/*   Updated: 2026/01/06 02:01:24 by claghrab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// Helper function to print separation lines
void printDivider(std::string title) {
    std::cout << "\n----------------------------------------" << std::endl;
    std::cout << title << std::endl;
    std::cout << "----------------------------------------" << std::endl;
}

int main()
{
    // ------------------------------------------------------------------
    // TEST 1: Mandatory Subject Test (Polymorphism)
    // ------------------------------------------------------------------
    printDivider("TEST 1: Mandatory Subject Test");
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Type j: " << j->getType() << " " << std::endl;
    std::cout << "Type i: " << i->getType() << " " << std::endl;

    std::cout << "Sound i (Cat): ";
    i->makeSound(); // will output the cat sound!
    
    std::cout << "Sound j (Dog): ";
    j->makeSound();
    
    std::cout << "Sound meta (Animal): ";
    meta->makeSound();

    // ------------------------------------------------------------------
    // TEST 2: WrongAnimal Test (Absence of Polymorphism)
    // ------------------------------------------------------------------
    printDivider("TEST 2: WrongAnimal (Non-Virtual) Behavior");

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "Type wrongCat: " << wrongCat->getType() << " " << std::endl;

    std::cout << "Sound wrongCat (Should be WrongAnimal sound): ";
    wrongCat->makeSound(); // EXPECTED: WrongAnimal sound, NOT WrongCat sound

    std::cout << "Sound wrongMeta: ";
    wrongMeta->makeSound();

    // ------------------------------------------------------------------
    // TEST 3: Destructor Chain Test
    // ------------------------------------------------------------------
    printDivider("TEST 3: Destructors (Check for memory leaks/output)");
    
    // If destructors are virtual, deleting base pointer deletes derived object
    std::cout << "Deleting Dog (j)..." << std::endl;
    delete j;
    
    std::cout << "Deleting Cat (i)..." << std::endl;
    delete i;
    
    std::cout << "Deleting Animal (meta)..." << std::endl;
    delete meta;

    std::cout << "Deleting WrongCat (wrongCat)..." << std::endl;
    delete wrongCat; // WARNING: If WrongAnimal destructor isn't virtual, this might leak WrongCat parts!
    
    std::cout << "Deleting WrongAnimal (wrongMeta)..." << std::endl;
    delete wrongMeta;

    // ------------------------------------------------------------------
    // TEST 4: Copy Constructor & Assignment Operator
    // ------------------------------------------------------------------
    printDivider("TEST 4: Canonical Form (Copy/Assign)");

    std::cout << "[1] Create original Dog" << std::endl;
    Dog originalDog;
    
    std::cout << "\n[2] Create copy using Copy Constructor" << std::endl;
    Dog copyDog(originalDog);
    
    std::cout << "\n[3] Create distinct dog and assign" << std::endl;
    Dog assignedDog;
    assignedDog = originalDog;
    
    std::cout << "\n[4] Check sounds of copies" << std::endl;
    std::cout << "Original: "; originalDog.makeSound();
    std::cout << "Copy: "; copyDog.makeSound();
    std::cout << "Assigned: "; assignedDog.makeSound();

    std::cout << "\n[5] Destruction of stack objects follows..." << std::endl;

    return 0;
}