#include <iostream>
#include <iomanip>
using namespace std;

bool isInsideQuotes(char str[]) {
    int length = 0;
    bool insideQuotes = false;
    while (str[length] != '\0') {
        length++;
    }
    if (length == 2 && str[0] == '\'' && str[1] == '\'') {
        insideQuotes = true;
    }
    else if (length > 2 && str[0] == '\'' && str[length-1] == '\'') {
        insideQuotes = true;
        for (int i = 1; i < length-1; i++) {
            if (str[i] == '\'' && str[i-1] != '\\') {
                insideQuotes = false;
                break;
            }
        }
    }
    else {
        insideQuotes = false;
    }
    return insideQuotes;
}

int main() {
    // Here are the test cases I used with provided test data given in the assignment:
    // Everything ouputs correctly
    char s1[] = {'\'', '\'', '\0'} ;
    char s2[] = {'\'', 'H', '\'', '\0'} ;
    char s3[] = {'\'', 'H', 'e', 'l', 'l', 'o', '\'', '\0'} ;
    char s4[] = {'\'', '\0'} ;
    char s5[] = {'\'', 'H', 'e', '\'', 'l', 'o', '\'', '\0'} ;
    char s6[] = {'\'', 'H', 'e', '\'', '\'', 'o', '\'', '\0'} ;

    cout << "s1: " << boolalpha << isInsideQuotes(s1) << endl;
    cout << "s2: " << boolalpha << isInsideQuotes(s2) << endl;
    cout << "s3: " << boolalpha << isInsideQuotes(s3) << endl;
    cout << "s4: " << boolalpha << isInsideQuotes(s4) << endl;
    cout << "s5: " << boolalpha << isInsideQuotes(s5) << endl;
    cout << "s6: " << boolalpha << isInsideQuotes(s6) << endl;

    return 0;
}
