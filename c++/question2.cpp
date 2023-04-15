#include <iostream>
using namespace std;

bool checkBlanks(char str[], int &blankCount, bool& allBlanks, int& leadingCount) {
    blankCount = 0;
    allBlanks = true;
    leadingCount = 0;
    bool foundNonBlank = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            blankCount++;
            if (!foundNonBlank) {
                leadingCount++;
            }
        } else {
            allBlanks = false;
            foundNonBlank = true;
        }
    }
    return true;
}

int main() {
    char s1[] = {' ', '\0'} ;
    int count1, leadingCount1;
    bool allBlanks1;
    checkBlanks(s1, count1, allBlanks1, leadingCount1);
    cout << "Blank count: " << count1 << " AllBlanks: " << boolalpha << allBlanks1 << " Leading count: " << leadingCount1 << endl;
    cout << endl;
  
    char s2[] = {' ', ' ', ' ', '\0'} ;
    int count2, leadingCount2;
    bool allBlanks2;
    checkBlanks(s2, count2, allBlanks2, leadingCount2);
    cout << "Blank count: " << count2 << " AllBlanks: " << boolalpha << allBlanks2 << " Leading count: " << leadingCount2 << endl;
    cout << endl;


    char s3[] = {' ', 'a', '\0'} ;
    int count3, leadingCount3;
    bool allBlanks3;
    checkBlanks(s3, count3, allBlanks3, leadingCount3);
    cout << "Blank count: " << count3 << " AllBlanks: " << boolalpha << allBlanks3 << " Leading count: " << leadingCount3 << endl;
    cout << endl;


    char s4[] = {' ', 'a', ' ', 'b', '\0'} ;
    int count4, leadingCount4;
    bool allBlanks4;
    checkBlanks(s4, count4, allBlanks4, leadingCount4);
    cout << "Blank count: " << count4 << " AllBlanks: " << boolalpha << allBlanks4 << " Leading count: " << leadingCount4 << endl;
    cout << endl;


    char s5[] = {'a', ' ', 'b', '\0'} ;
    int count5, leadingCount5;
    bool allBlanks5;
    checkBlanks(s5, count5, allBlanks5, leadingCount5);
    cout << "Blank count: " << count5 << " AllBlanks: " << boolalpha << allBlanks5 << " Leading count: " << leadingCount5 << endl;
    cout << endl;


    char s6[] = {'a', 'b', ' ', '\0'} ;
    int count6, leadingCount6;
    bool allBlanks6;
    checkBlanks(s6, count6, allBlanks6, leadingCount6);
    cout << "Blank count: " << count6 << " AllBlanks: " << boolalpha << allBlanks6 << " Leading count: " << leadingCount6 << endl;
    cout << endl;


    char s7[] = {'a', 'b', ' ', ' ', '\0'} ;
    int count7, leadingCount7;
    bool allBlanks7;
    checkBlanks(s7, count7, allBlanks7, leadingCount7);
    cout << "Blank count: " << count7 << " AllBlanks: " << boolalpha << allBlanks7 << " Leading count: " << leadingCount7 << endl;
    cout << endl;


    char s8[] = {' ', ' ', ' ', 'a', '\0'} ;
    int count8, leadingCount8;
    bool allBlanks8;
    checkBlanks(s8, count8, allBlanks8, leadingCount8);
    cout << "Blank count: " << count8 << " AllBlanks: " << boolalpha << allBlanks8 << " Leading count: " << leadingCount8 << endl;
    cout << endl;


    char s9[] = {' ', ' ', ' ', 'a', ' ', 'b', '\0'} ;
    int count9, leadingCount9;
    bool allBlanks9;
    checkBlanks(s9, count9, allBlanks9, leadingCount9);
    cout << "Blank count: " << count9 << " AllBlanks: " << boolalpha << allBlanks9 << " Leading count: " << leadingCount9 << endl;
    cout << endl;

    return 0;
}