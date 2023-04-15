 #include <iostream>
#include <iomanip>
#include <sstream>
#include "assignments.h"

using namespace std; 

 
 
string Assignment::toString() const {
    stringstream ss;
    ss << variable <<  setw(10 - variable.size()) << " = " <<  setw(10) << value;
    return ss.str();
}

bool is_number(string str) {
    bool isNumber = true;
    if (str.empty()) {
        isNumber = false;
    }
    for (int i = 0; i < str.size(); i++) {
        if (i == 0 && str[i] == '-') {
            continue;
        }
        if (!isdigit(str[i])) {
            isNumber = false;
        }
    }
    return isNumber;
}

bool is_valid_variable_name(string variable) {
    bool validVar = true;
    if (!isalpha(variable[0])) {
        validVar = false;
    }
    for (char c : variable) {
        if (!isalnum(c)) {
            validVar = false;
        }
    }
    return validVar;
}

bool add_assignment(vector<Assignment>& assignments, string input) {
    bool assignmentAdded = true;
    if (input == "add") {
         string assignment_input;
        cout << "Enter the assignment in the format variable = value:" << endl;
        getline(cin, assignment_input);
        return add_assignment(assignments, assignment_input);
    }
    string variable, op, value_str;
    int value;
    stringstream ss(input);
    ss >> variable >> op >> value_str;
    if (op != "=") {
        cout << "Invalid assignment operator." << endl;
        assignmentAdded = false;
    }
    else if (!is_number(value_str)) {
        cout << "The assignment value is not a number." << endl;
        assignmentAdded = false;
    }
    else if (!is_valid_variable_name(variable)) {
        cout << "Invalid variable name." << endl;
        assignmentAdded = false;
    }
    if (assignmentAdded) {
        value = stoi(value_str);
        Assignment assignment = { variable, value };
        assignments.push_back(assignment);
        cout << variable << setw(10 - variable.size()) << " = " << setw(10) << value << endl;
    }
    return assignmentAdded;
}


void list_assignments(const vector<Assignment>& assignments) {
    cout << "All assignments:" << endl;
    if (assignments.empty()) {
        cout << "There is no assignment." << endl;
        return;
    }
    for (Assignment assignment : assignments) {
        cout << assignment.variable << setw(10 - assignment.variable.size()) << " = " << setw(10) << assignment.value << endl;
    }
}


void print_stats(const vector<Assignment>& assignments) {
    if (assignments.empty()) {
        cout << "There is no assignment." << endl;
        return;
    }
    int num_assignments = assignments.size();
    int num_positive_assignments = 0;
    int num_negative_assignments = 0;
    int largest_assignment_value = INT_MIN;
    int smallest_assignment_value = INT_MAX;
    Assignment largest_assignment = assignments[0];
    Assignment smallest_assignment = assignments[0];
    for (Assignment assignment : assignments) {
        if (assignment.value > 0) {
            num_positive_assignments++;
        }
        if (assignment.value < 0) {
            num_negative_assignments++;
        }
        if (assignment.value > largest_assignment_value) {
            largest_assignment_value = assignment.value;
            largest_assignment = assignment;
        }
        if (assignment.value < smallest_assignment_value) {
            smallest_assignment_value = assignment.value;
            smallest_assignment = assignment;
        }
    }
    cout << "Total number of assignments:          " << setw(10) << num_assignments << endl;
    cout << "Total number of positive assignments: " << setw(10) << num_positive_assignments << endl;
    cout << "Total number of negative assignments: " << setw(10) << num_negative_assignments << endl;
    cout << "Largest assignment: " << largest_assignment.toString() << endl;
    cout << "Smallest assignment: " << smallest_assignment.toString() << endl;
}



int main() {
    vector<Assignment> assignments;
    cout << "Welcome to assignment recording program." << endl;
    while (true) {
        string input;
        cout << "Enter a command (add, list, stats, exit):" << endl;
        getline(cin, input);
        if (input == "add") {
        add_assignment(assignments, input);
        } else if (input == "list") {
        list_assignments(assignments);
        } else if (input == "stats") {
        print_stats(assignments);
        } else if (input == "exit") {
        break;
        } else {
        cout << "Unsupported command." << endl;
        }
    }
    return 0;
}