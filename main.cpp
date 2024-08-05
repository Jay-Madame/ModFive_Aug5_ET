#include <iostream>
#include "EvenEater.h"
#include "EvenEater.cpp"

int main() {
    EvenEater eater;
    try {
        std::cout << eater.eat(4) << std::endl;
        std::cout << eater.eat(3) << std::endl;
    } catch (const EvenEater::OddFoodException& e) {
        std::cerr << "Caught an OddFoodException: " << e.what() << std::endl;
    }
    return 0;
}