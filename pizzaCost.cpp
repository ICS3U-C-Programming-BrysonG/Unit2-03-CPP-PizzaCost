// Copyright (c) 2026 Bryson All rights reserved.
// .
// Created by: Bryson Grant
// Date: 09 28, 2026
// This code first takes a diameter value from the user.
// Then it'll calculate the price of the pizza and display it.

#include <iomanip>
#include <iostream>

int main() {
    // Setting constant variables
    const float HST = .13;
    const float RENT = 2.25;
    const int LABOUR = 2;
    const float PIZZA_COST = 1.5;
    const float MATERIALS = 1.5;

    // Setting vairables
    int diameter;
    float tax;
    float subTotal;
    float total;

    // Asking for diameter
    std::cout << "Enter diameter of pizza (incs): \n";
    std::cin >> diameter;

    // Calculating the subTotal, tax, and total
    subTotal = (MATERIALS * diameter) + LABOUR + RENT + (PIZZA_COST * diameter);

    tax = subTotal * HST;
    total = subTotal + tax;
    // Displaying the total
    std::cout << std::fixed
    << std::setprecision(2)
    << std::setfill('0') << total << "\n";
}
