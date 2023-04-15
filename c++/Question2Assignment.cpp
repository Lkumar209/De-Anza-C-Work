#include <iostream>
#include <iomanip>
using namespace std;

void toggleBlanks(char* str, bool toggle, int& numToggled, bool& allBlanksOrQuestionMarks) {
    numToggled = 0;
    allBlanksOrQuestionMarks = true;
    char toggleChar = toggle ? '?' : ' ';
    while (*str != '\0') {
        if (*str == ' ' || *str == '?') {
            if (*str != toggleChar) {
                *str = toggleChar;
                numToggled++;
            }
        } else {
            allBlanksOrQuestionMarks = false;
        }
        str++;
    }
    if (allBlanksOrQuestionMarks && numToggled == 0) {
        allBlanksOrQuestionMarks = true;
    }
}


int main() {
    // Test cases
    char str1[] = "";
    int numToggled1;
    bool allBlanksOrQuestionMarks1;
    toggleBlanks(str1, true, numToggled1, allBlanksOrQuestionMarks1);
    cout << str1 << " " << numToggled1 << " " << boolalpha << allBlanksOrQuestionMarks1 << endl; 
    cout << endl;
   
    char str2[] = "";
    int numToggled2;
    bool allBlanksOrQuestionMarks2;
    toggleBlanks(str2, false, numToggled2, allBlanksOrQuestionMarks2);
    cout << str2 << " " << numToggled2 << " " << boolalpha << allBlanksOrQuestionMarks2 << endl; 
    cout << endl;
   
    char str3[] = "One Two Three";
    int numToggled3;
    bool allBlanksOrQuestionMarks3;
    toggleBlanks(str3, true, numToggled3, allBlanksOrQuestionMarks3);
    cout << str3 << " " << numToggled3 << " " << boolalpha<< allBlanksOrQuestionMarks3 << endl; 
    cout << endl;
   
    char str4[] = "One?Two?Three";
    int numToggled4;
    bool allBlanksOrQuestionMarks4;
    toggleBlanks(str4, false, numToggled4, allBlanksOrQuestionMarks4);
    cout << str4 << " " << numToggled4 << " " << boolalpha << allBlanksOrQuestionMarks4 << endl; 
    cout << endl;
   
    char str5[] = "? ? "; 
    int numToggled5;
    bool allBlanksOrQuestionMarks5;
    toggleBlanks(str5, true, numToggled5, allBlanksOrQuestionMarks5);
    cout << str5 << " " << numToggled5 << " " << boolalpha<< allBlanksOrQuestionMarks5 << endl; 
    cout << endl;
   
    char str6[] = "????"; 
    int numToggled6;
    bool allBlanksOrQuestionMarks6;
    toggleBlanks(str6, false, numToggled6, allBlanksOrQuestionMarks6);
    cout << str6 << " " << numToggled6 << " "<< boolalpha  << allBlanksOrQuestionMarks6 << endl;
    cout << endl;
   
    char str7[] = " "; 
    int numToggled7;
    bool allBlanksOrQuestionMarks7;
    toggleBlanks(str7, true, numToggled7, allBlanksOrQuestionMarks7);
    cout << str7 << " " << numToggled7 << " " << boolalpha << allBlanksOrQuestionMarks7 << endl;
    cout << endl;
   
    char str8[] = "?";
    int numToggled8;
    bool allBlanksOrQuestionMarks8;
    toggleBlanks(str8, false, numToggled8, allBlanksOrQuestionMarks8);
    cout << str8 << " " << numToggled8 << " " << boolalpha << allBlanksOrQuestionMarks8 << endl;
    cout << endl;
   
    char str9[] = "?"; 
    int numToggled9;
    bool allBlanksOrQuestionMarks9;
    toggleBlanks(str9, true, numToggled9, allBlanksOrQuestionMarks9);
    cout << str7 << " " << numToggled7 << " " << boolalpha<< allBlanksOrQuestionMarks7 << endl;
    cout << endl;
   
    char str10[] = " a";
    int numToggled10;
    bool allBlanksOrQuestionMarks10;
    toggleBlanks(str10, true, numToggled10, allBlanksOrQuestionMarks10);
    cout << str10 << " " << numToggled10 << " " << boolalpha << allBlanksOrQuestionMarks10 << endl;
    cout << endl;
   
    char str11[] = "?a";
    int numToggled11;
    bool allBlanksOrQuestionMarks11;
    toggleBlanks(str11, false, numToggled11, allBlanksOrQuestionMarks11);
    cout << str11 << " " << numToggled11 << " " << boolalpha << allBlanksOrQuestionMarks11 << endl;
    cout << endl;
   
    char str12[] = "?a";
    int numToggled12;
    bool allBlanksOrQuestionMarks12;
    toggleBlanks(str12, true, numToggled12, allBlanksOrQuestionMarks12);
    cout << str12 << " " << numToggled12 << " " << allBlanksOrQuestionMarks12 << endl;
    cout << endl;
   
   
   
    return 0;
}



