
#include <iostream>
using namespace std;




int main() {
    int operand1, operand2;
    char option;

    cout << "Please enter the first operand: ";
    if (!(cin >> operand1)) {
        cout << "Unable to read the number for the first operand." << endl;
        return 1;
    }

    cout << "Please enter the second operand: ";
    if (!(cin >> operand2)) {
        cout << "Unable to read the number for the second operand." << endl;
        return 1;
    }

    cout << "Please enter the printing option ('A' or 'B'): ";
    cin >> option;

    if (option != 'A' && option != 'B') {
        cout << "Unsupported printing option." << endl;
        return 1;
    }

    cout << "   " << operand1 << "    +   " << operand2 << "    =   " << operand1 + operand2 << endl;
    cout << "   " << operand1 << "    -   " << operand2 << "    =   " << operand1 - operand2 << endl;

    if (option == 'A') {
        cout << "   " << operand1 << "    *   " << operand2 << "    =   " << operand1 * operand2 << endl;
        cout << "   " << operand1 << "    %   " << operand2 << "    =   " << operand1 % operand2 << endl;
    }

    return 0;
}
