 
#include <iostream>
#include "getLargest.h"

int getLargest(Expression* arr, int size, int& count) {
    int maxIndex = 0;
    count = 1;
    Expression maxValue = arr[0];
    for (int i = 1; i < size; ++i) {
        Expression currentValue = arr[i];
        if (currentValue.compare(maxValue) > 0) {
            maxIndex = i;
            count = 1;
            maxValue = currentValue;
        } else if (currentValue.compare(maxValue) == 0) {
            ++count;
        }
    }
    return maxIndex;
}

int main() {
    const int size = 6;
    Expression arr[size] = { Expression(1, '+', 2), Expression(3, '-', 1), Expression(2, '+', 4), Expression(3, '-', 2), Expression(4, '+', 1), Expression(40, '-', 10) };
    int count;
    int maxIndex = getLargest(arr, size, count);
    std::cout << "Index of max value: " << maxIndex << std::endl;
    std::cout << "Count of max value: " << count << std::endl;
    

    
    return 0;
}
