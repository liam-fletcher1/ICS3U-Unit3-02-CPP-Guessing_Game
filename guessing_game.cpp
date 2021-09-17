// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user to guess a number between 0 - 9

#include <iostream>


int main() {
    // this function checks if the user picked the correct number
    const int CORRECT_NUMBER = 5;
    int number_guessed;

    // input
    std::cout << "Enter the number between 0 - 9: ";
    std::cin >> number_guessed;
    std::cout << "" << std::endl;

    // process
    if (number_guessed > CORRECT_NUMBER) {
            // output
            std::cout << "You guessed the number incorrectly :(";
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "Done.";
    }
    // process
    if (number_guessed < CORRECT_NUMBER) {
            // output
            std::cout << "You guessed the number incorrectly :(";
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "Done.";
    }
    // process
    if (number_guessed == CORRECT_NUMBER) {
            // output
            std::cout << "You guessed the number correctly!";
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "Done.";
    }
}
