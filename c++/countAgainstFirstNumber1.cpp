#include <iostream>
using namespace std;

int countAgainstFirstNumber(int& count, bool& isConsistent) {
    int firstNumber;
    cin >> firstNumber;
    int number;
    count = 0;
    isConsistent = true;
    bool isIncreasing = true;
    bool isDecreasing = true;
    while (cin >> number) {
        if (number == firstNumber) {
            break;
        }
        count++;
        if (number > firstNumber) {
            isDecreasing = false;
        } else if (number < firstNumber) {
            isIncreasing = false;
        }
    }
    if (count == 0) {
        isConsistent = false;
    } else {
        isConsistent = isIncreasing || isDecreasing;
    }
    return count;
}

int main() {
    // I inputted the test cases from the assignment, and the output was correct.
    int count;
    bool isConsistent;
    cout << "Please enter a list of numbers: ";
    int result = countAgainstFirstNumber(count, isConsistent);
  
    cout << count << " and " << boolalpha << isConsistent << endl;
    return 0;
}
