// Copyright (c) 2021 Rodas Nega All rights reserved.
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program uses an array to find the smallest number
//   from randomly generated numbers


#include <iostream>
#include <random>
#include <ctime>
#include <array>


template<size_t N>
int SmallestValue(std::array<int, N> listOfRandomNumbers) {
    // this function finds the smallest value
    int minValue;

    // process
    minValue = listOfRandomNumbers[0];
    for (int xValue : listOfRandomNumbers) {
        if (xValue < minValue) {
            minValue = xValue;
        }
    }

    return minValue;
}


main() {
    // this function uses an array to generate 10 random numbers
    //  from 1-100 and outputs the list

    std::array<int, 10> randomNumbers;
    int numberInArray;
    int smallestNumber;
    int sum = 0;

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 100);
    // [0, 100]


    // output
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        numberInArray = idist(rgen);
        randomNumbers[loop_counter] = numberInArray;
    }

    std::cout << "The random numbers from (1-100) are..." << std::endl;
    std::cout << "" << std::endl;

    for (int loopCounter; loopCounter < 10; loopCounter++) {
        std::cout << randomNumbers[loopCounter] << " ";
        sum += randomNumbers[loopCounter];
    }
    std::cout << "" << std::endl;

    smallestNumber = SmallestValue(randomNumbers);

    std::cout << "\nThe smallest number is "
    << smallestNumber << "." << std::endl;
    std::cout << "\nDone." << std::endl;
}
