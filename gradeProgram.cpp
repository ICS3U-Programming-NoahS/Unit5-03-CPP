// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 30th, 2023
// This program asks the user for their grade level
// then displays the mark that corresponds to that level
#include <iostream>

int CalcMark(std::string level) {
    // Return mark to main using if else
    if (level == "4++") {
        return 98;
    } else if (level == "4+") {
        return 95;
    } else if (level == "4") {
        return 90;
    } else if (level == "4-") {
        return 84;
    } else if (level == "3+") {
        return 78;
    } else if (level == "3") {
        return 75;
    } else if (level == "3-") {
        return 71;
    } else if (level == "2+") {
        return 68;
    } else if (level == "2") {
        return 65;
    } else if (level == "2-") {
        return 61;
    } else if (level == "1+") {
        return 58;
    } else if (level == "1") {
        return 55;
    } else if (level == "1-") {
        return 51;
    } else if (level == "R") {
        return 25;
    } else {
        return -1;
    }
}

int main() {
    // Declare variables
    std::string userLevel;

    // get level from user
    std::cout << "Enter your grade level: ";
    std::cin >> userLevel;

    // Call function to find mark
    int calculatedMark = CalcMark(userLevel);

    // Check if user mark is invalid
    if (calculatedMark == -1) {
        std::cout << userLevel << " is not a valid level." << std::endl;
    } else {
        // Display mark
        std::cout << "Your mark is " << calculatedMark << "%." << std::endl;
    }
}
