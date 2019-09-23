// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: September 2019
// This Program calculates the price of a pizza
// from a user inputed dimesnions of a circle

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the function of a pizza
    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;
    float diameter;
    float sub_total;
    float total;

    // input
    std::cout << "Enter the diameter of the pizza you would like (inch): ";
    std::cin >> diameter;

    // process
    sub_total = LABOR + RENT + (diameter * COST_PER_INCH);
    total = sub_total + (sub_total * HST);

    // output
    std::cout << "" << std::endl;
    std::cout << "The cost for a " << diameter << " inch pizza is: $"
    << std::fixed << std::setprecision(2) << std::setfill('0')
    << total << "." << std::endl;
}
