// Copyright (c) 2022 Zaida Hammel All rights reserved
//
// Created by: Zaida Hammel
// Created on: Nov 2022
// This program is converts celsius to fahrenheit

#include <iostream>
#include <string>

void Temperature() {
    std::string strCelsius;
    int intCelsius;
    double fahrenheit;

    // input
    std::cout << "This program converts °C to °F." << std::endl;
    std::cout << "Enter any degrees in celsius: ";
    std::cin >> strCelsius;

    // process and output
    try {
        intCelsius = std::stoi(strCelsius);
        fahrenheit = (9.0 / 5) * intCelsius + 32;
        std::cout << intCelsius << "°c is equal to " << fahrenheit << "°f.";
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
int main() {
    // this function the calls fahrenheit function
    Temperature();
}
