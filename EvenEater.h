/*
[ ] Create a class called EvenEater.  <br/>
    - [ ] EvenEater should have a public Exception class: OddFoodException.<br/>
    - [ ] EvenEater should have a single public function string eat(int num);<br/>
        - [ ] The eat function should test whether the num is even.  If it is, return a string "Yum!"<br/>
        - [ ] If it is not, an OddFoodException should be thrown.<br/>
*/

#pragma once
#include <exception>
#include <iostream>

#include <exception>
#include <string>

class EvenEater
{
public:
    class OddFoodException : public std::exception
    {
    private:
        std::string message_;

    public:
        explicit OddFoodException(const std::string &message);
        virtual const char *what() const noexcept override;
    };

public:
    std::string eat(int num);
};