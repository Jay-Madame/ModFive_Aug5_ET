#include "EvenEater.h"

EvenEater::OddFoodException::OddFoodException(const std::string& message)
    : message_(message) {}

const char* EvenEater::OddFoodException::what() const noexcept {
    return message_.c_str();
}

std::string EvenEater::eat(int num) {
    if (num % 2 == 0) {
        return "Yum!";
    } else {
        throw OddFoodException("The number is odd. Cannot eat!");
    }
}
