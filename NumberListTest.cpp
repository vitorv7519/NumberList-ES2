#include <iostream>
#include <cassert>
#include "NumberList.hpp"

void testAddNumber() {
    NumberList list;
    list.addNumber(5);
    assert(list.maxNumber() == 5); 
}

void testAverage() {
    NumberList list;
    list.addNumber(10);
    list.addNumber(20);
    list.addNumber(30);
    assert(list.average() == 20.0);
}

void testMaxNumber() {
    NumberList list;
    list.addNumber(5);
    list.addNumber(10);
    list.addNumber(15);
    assert(list.maxNumber() == 15);
}

void testMinNumber() {
    NumberList list;
    list.addNumber(5);
    list.addNumber(10);
    list.addNumber(15);
    assert(list.minNumber() == 5);
}

int main() {
    testAddNumber();
    testAverage();
    testMaxNumber();
    testMinNumber();

    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}