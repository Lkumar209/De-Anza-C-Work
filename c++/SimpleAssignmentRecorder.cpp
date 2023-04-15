#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool isValidVariable(string variable) {
    for (int i = 0; i < variable.length(); i++) {
        if (!isalnum(variable[i]) && variable[i] != '_') {
            return false;
        }
    }
    return true;
}

bool isValidValue(string value) {
    for (int i = 0; i < value.length(); i++) {
        if (!isdigit(value[i])) {
            return false;
        }
    }
    return true;
}

void addAssignment(string& largest, string& all) {
    string assignment;
    cout << "Enter a new assignment: ";
    getline(cin, assignment);
    stringstream ss(assignment);
    string variable, equalSign, value;
    ss >> variable >> equalSign >> value;
    if (!ss || equalSign != "=" || !isValidVariable(variable) || !isValidValue(value)) {
        cout << "Invalid input. Please enter a valid assignment in the form: variable = value" << endl;
        return;
    }
    string formattedAssignment = variable + " = " + value;
    if (largest.empty() || value > largest.substr(largest.find('=') + 2)) {
        largest = formattedAssignment;
    }
    all += formattedAssignment + "\n";
    cout << formattedAssignment << endl;
}


void showLargestAssignment(string largest) {
    if (largest.empty()) {
        cout << "No assignments recorded yet." << endl;
    } else {
        cout << "Largest assignment: " << largest << endl;
    }
}

void showAllAssignments(string all) {
    if (all.empty()) {
        cout << "No assignments recorded yet." << endl;
    } else {
        cout << "All assignments:\n" << all;
    }
}

int main() {
    string largest = "";
    string all = "";
    int choice = 0;
    while (choice != 4) {
        cout << "==== Simple Assignment Recorder ====" << endl;
        cout << "1. Enter a new assignment" << endl;
        cout << "2. Show the largest assignment" << endl;
        cout << "3. Show all assignments" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1:
                addAssignment(largest, all);
                break;
            case 2:
                showLargestAssignment(largest);
                break;
            case 3:
                showAllAssignments(all);
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        }
    }
    return 0;
}
