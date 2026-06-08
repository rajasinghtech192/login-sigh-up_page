#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    std::srand(static_cast<unsigned int>(std::time(0)));
    int myNumber = std::rand() % 100 + 1;
    int userNumber = 0;

    do {
        std::cout << "Guess my number(1-100) : ";
        std::cin >> userNumber;

        if (userNumber == myNumber) {
            std::cout << "WOOHOO .. CORRECT NUMBER!!!" << std::endl;
            break;
        } else if (userNumber > myNumber) {
            std::cout << "your number is too large" << std::endl;
            std::  cout << std::endl;
        } else {
            std::cout << "your number is too small" << std::endl;
            std::  cout << std::endl;
        }
    } while (userNumber >= 0);
    std::cout << "My number was : " << myNumber << std::endl;

    return 0;
}