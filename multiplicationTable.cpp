// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Date: May 25, 2021
//
// The program will prompt the user to input a positive integer.
// It will then print the multiplication table of that number
// with the numbers 0 to 10.


#include <iostream>


int main() {
    // initializations
    int counter;
    float userNumInt;
    float answer;
    int answertwo;
    std::string userNumString;
    std::string nextQuestion;


    // get the user's number
    std::cout << "Display multiplication table of? ";
    std::cin >> userNumString;

    try {
        userNumInt = std::stof(userNumString);

        // multiplies the given number from 0 to the 12
        if (userNumInt >= 0) {
            for (counter = 1; counter <= 12; counter++) {
                answer = userNumInt*counter;
                std::cout << userNumInt << " x " << counter <<
                             " = " << answer << std::endl;
            }

            // get the user's number
            std::cout << "Would you like to divide the number as well?"
                         "Type 'yes' or 'no': ";
            std::cin >> nextQuestion;

            if (nextQuestion == "yes") {
                // multiplies the given number from 0 to the 12
                if (userNumInt >= 0) {
                    for (counter = 1; counter <= 12; counter++) {
                        answer = userNumInt/counter;
                        std::cout << userNumInt << " ÷ " << counter <<
                                     " = " << ("%.2f", answer) << std::endl;
                    }
                } else {
                std::cout << "\n";
                std::cout << userNumInt << " is not"
                                           "a positive number." << std::endl;
                }

            } else if (nextQuestion == "no") {
                std::cout << "\n";
                std::cout << "Very well" << std::endl;
            } else {
                std::cout << "\n";
                std::cout << "Since the input isn't yes,"
                             "I'll assume it means no" << std::endl;
            }

        } else {
            std::cout << "\n";
            std::cout << userNumInt << " is not a"
                                       "positive number." << std::endl;
        }

        // make sure to catch errors such as anything but an integer
    } catch (std::invalid_argument) {
        // The user did not enter an integer.
        std::cout << "\n";
        std::cout << "Please enter a valid number.\n";
    }

std::cout << "\n";
std::cout << "Thank you for your input" << std::endl;
}
