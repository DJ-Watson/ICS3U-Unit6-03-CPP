// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by DJ Watson
// Created on December 2019
// This program passes an array as a parameter

#include <iostream>
#include <ctime>
#include <array>


int main() {
    std::array<int, 10> randomNumber;
    int singleNumber = 0;
    int sum = 0;
    int min_number = 0;

    srand(time(NULL));

    // input
    std::cout << "numbers are: ";
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        singleNumber = (rand() % 100) + 1;
        randomNumber[loop_counter] = singleNumber;
        std::cout << singleNumber << ", ";
    }
    std::cout << " " << std::endl;

    min_number = randomNumber[0];

    for (int singleNumber : randomNumber) {
        if (singleNumber < min_number) {
            min_number = singleNumber;
        }
    }

    std::cout << "minimum = " << min_number;
}
