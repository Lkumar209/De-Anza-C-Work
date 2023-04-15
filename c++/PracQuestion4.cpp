#include <iostream>
using namespace std;

int readNumUntilRepeated(int& first, int& last) {
    int num, count = 0;
    bool is_first_number = true;
    while (true) {
        cin >> num;
        if (is_first_number) {
            first = num;
            is_first_number = false;
        }
        else if (num == first || num == last) {
            break;
        }
        last = num;
        count++;
    }
    return count;
}

int main() {
    // I tested all the cases and they are correct.
    int value = 0, first = 0, last = 0;
    cout << "Please enter numbers until the first or last number is repeated: ";
    int count = readNumUntilRepeated(first, last);
    cout << "Count: " << count << " " << " First Number: " << first << " " << " Last Number: " << last << endl;
   
    return 0;
}
