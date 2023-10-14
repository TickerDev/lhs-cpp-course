// Name:
// Block:
// Lab 1: Hello, World!

#include <iostream>

int main()
{

    int i = 1, j = 2;
    std::cout << "Enter your two favorite numbers: ";
    std::cin >> i >> j;

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Lucky numbers are " << i << " and " << j << ".";
}