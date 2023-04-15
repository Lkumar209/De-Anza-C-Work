#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    char option;
    bool valid_input = false;

    while (!valid_input) {
        cout << "Please enter the first operand: ";
        cin >> num1;

        if (cin.fail()) {
            cout << "Unable to read the number for the first operand." << endl;
            cin.clear();  // Clear the error flag on the input stream.
            while (cin.get() != '\n');  // Discard remaining characters in the input stream.
            continue;  // Start the loop again to ask for a new input.
        }
        else if (num1 < 0) {
            cout << "The first operand is negative." << endl;
            continue;
        }
        else {
            valid_input = true;  // The input is valid, so exit the loop.
        }
    }

    valid_input = false;
    while (!valid_input) {
        cout << "Please enter the second operand: ";
        cin >> num2;

        if (cin.fail()) {
            cout << "Unable to read the number for the second operand." << endl;
            cin.clear();  // Clear the error flag on the input stream.
            while (cin.get() != '\n');  // Discard remaining characters in the input stream.
            continue;  // Start the loop again to ask for a new input.
        }
        else if (num2 < 0) {
            cout << "The second operand is negative." << endl;
            continue;
        }
        else {
            valid_input = true;  // The input is valid, so exit the loop.
        }
    }

    valid_input = false;
    while (!valid_input) {
        cout << "Please enter the expression operator ('+', '-', '*', '%'): " << endl;
        cin >> option;

        if (option != '+' && option != '-' && option != '*' && option != '%') {
            cout << "Unsupported expression operator." << endl;
            continue;
        }
        else {
            valid_input = true;  // The input is valid, so exit the loop.
        }
    }

    if (option == '+') {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (option == '-') {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (option == '*') {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (option == '%') {
        cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    }

    return 0;
}
