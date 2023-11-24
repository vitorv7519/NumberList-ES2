#include "NumberList.hpp"
#include <limits>

void NumberList::addNumber(int number) {
    numbers.push_back(number);
}

double NumberList::average() const {
    if (numbers.empty()) return 0.0;
    double sum = 0.0;
    for (int num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

int NumberList::maxNumber() const {
    if (numbers.empty()) return std::numeric_limits<int>::min();
    int maxNum = numbers[0];
    for (int num : numbers) {
        if (num > maxNum) maxNum = num;
    }
    return maxNum;
}

int NumberList::minNumber() const {
    if (numbers.empty()) return std::numeric_limits<int>::max();
    int minNum = numbers[0];
    for (int num : numbers) {
        if (num < minNum) minNum = num;
    }
    return minNum;
}