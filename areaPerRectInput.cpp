// Copyright (c) 2025 Volodymyr Kryzhanovskyi All rights reserved.
// Created by: Volodymyr Kryzhanovskyi
// Date: 02 28 2025
// This program calculates the area of rectangle.

#include <iostream>
#include <cmath>

int main() {
    int Length;
    int Width;
    std::cout << "Enter length of the rectangle (cm): "<< std::endl;
std::cin >> Length;
    std::cout << "Enter Width of the rectangle (cm): "<< std::endl;
    std::cin >> Width;
    std::cout << "The area of rectangle is Length * Width = " <<
    Length*Width << std::endl;
    std::cout << "The perimeter of rectangle is 2(Length+Width) = " <<
    2*Length + 2*Width << std::endl;
}
