#include <vector>

class NumberList {
private:
    std::vector<int> numbers;

public:
    void addNumber(int number);
    double average() const;
    int maxNumber() const;
    int minNumber() const;
};