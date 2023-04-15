#include <iostream>
#include <string>

using namespace std;



void printUnsupportedCommandMsg()
{
    cout << "Unsupported command. Please try again." << endl;
}

void printInvalidAssignmentOperatorMsg()
{
    cout << "Invalid assignment operator." << endl;
}

void printInvalidVariableNameMsg()
{
    cout << "Invalid variable name." << endl;
}

void addAssignment(string names[], int values[], int& numAssignments)
{
    cout << "Please enter an assignment: ";
    string input;
    cin.ignore(); 
    getline(cin, input);

    int eqPos = input.find('=');
    if (eqPos == string::npos || eqPos == 0 || eqPos == input.length() - 1) {
        printInvalidAssignmentOperatorMsg();
        return;
    }

    string name = input.substr(0, eqPos);
    string valueStr = input.substr(eqPos + 1);
    int value;
    try {
        value = stoi(valueStr);
    } catch (const invalid_argument&) {
        printInvalidAssignmentOperatorMsg();
        return;
    }

    name.erase(0, name.find_first_not_of(" \t\n\r\f\v"));
    name.erase(name.find_last_not_of(" \t\n\r\f\v") + 1);

    if (name.empty() || !isalpha(name[0])) {
        printInvalidVariableNameMsg();
        return;
    }
    for (int i = 1; i < name.length(); i++) {
        if (!isalnum(name[i])) {
            printInvalidVariableNameMsg();
            return;
        }
    }

    if (numAssignments < 100) {
        names[numAssignments] = name;
        values[numAssignments] = value;
        numAssignments++;
        cout << name << " = " << value << endl;
    } else {
        cout << "Assignment list is full. Cannot add any more assignments." << endl;
    }
}



void listAssignments(const string names[], const int values[], const int numAssignments)
{
    if (numAssignments == 0) {
        cout << "There is no assignment." << endl;
    } else {
        cout << "All assignments:" << endl;
        for (int i = 0; i < numAssignments; i++) {
            cout << names[i] << "       = " << values[i] << endl;
        }
    }
}

void printStats(const string names[], const int values[], const int numAssignments)
{
    if (numAssignments == 0) {
        cout << "There is no assignment." << endl;
        return;
    }
    
    int totalAssignments = 0;
    int totalPositive = 0;
    int totalNegative = 0;
    int largestValue = values[0];
    int smallestValue = values[0];
    string largestAssignment = names[0] + "       =        " + to_string(values[0]);
    string smallestAssignment = names[0] + "       =        " + to_string(values[0]);
    
    for (int i = 0; i < numAssignments; i++) {
        totalAssignments++;
        if (values[i] >= 0) {
            totalPositive++;
        } else {
            totalNegative++;
        }
        if (values[i] > largestValue) {
            largestValue = values[i];
            largestAssignment = names[i] + "       =        " + to_string(values[i]);
        }
        if (values[i] < smallestValue) {
            smallestValue = values[i];
            smallestAssignment = names[i] + "       =        " + to_string(values[i]);
        }
    }
    
    cout << "Total number of assignments:          " << totalAssignments << endl;
    cout << "Total number of positive assignments: " << totalPositive << endl;
    cout << "Total number of negative assignments: " << totalNegative << endl;
    cout << "The largest assignment:               " << largestAssignment << endl;
    cout << "The smallest assignment:              " << smallestAssignment << endl;
}


int main()
{
    const int MAX_ASSIGNMENTS = 100;
    string names[MAX_ASSIGNMENTS];
    int values[MAX_ASSIGNMENTS];
    int numAssignments = 0;

    cout << "Welcome to assignment recording program." << endl;

    string command;
    do {
        cout << "Please enter a command (add, list, stats or exit): ";
        cin >> command;

        if (command == "add") {
            addAssignment(names, values, numAssignments);
        } else if (command == "list") {
            listAssignments(names, values, numAssignments);
        } else if (command == "stats") {
            printStats(names, values, numAssignments);
        } else if (command == "exit") {
            cout << "Goodbye!" << endl;
            break;
        } else {
            printUnsupportedCommandMsg();
        }

    } while (true);

    return 0;
}
