#include <iostream>

using namespace std;

bool isJustZeroAndOnes(char str[], bool& onlyZeros, bool& onlyOnes) {
    bool onlyBinary = true;
    onlyZeros = true;
    onlyOnes = true;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '0') {
            onlyOnes = false;
        }
        else if (str[i] == '1') {
            onlyZeros = false;
        }
        else {
            onlyBinary = false;
            onlyZeros = false;
            onlyOnes = false;
            break;
        }
    }
    if (onlyZeros || onlyOnes) {
        onlyBinary = true;
    }
    return onlyBinary;
}

int main() {
    // The following test cases I used: 
    char s1[] = "" ;
    char s2[] = "0" ;
    char s3[] = "1" ;
    char s4[] = "01" ;
    char s5[] = "00" ;
    char s6[] = "11" ;
    char s7[] = "2" ;
    char s8[] = "12" ;
    char s9[] = "1A" ;

    bool onlyZeros, onlyOnes;
    cout << boolalpha;
    cout << "s1: " << isJustZeroAndOnes(s1, onlyZeros, onlyOnes) << ", " << onlyZeros << ", " << onlyOnes << endl;
    cout << "s2: " << isJustZeroAndOnes(s2, onlyZeros, onlyOnes) << ", " << onlyZeros << ", " << onlyOnes << endl;
    cout << "s3: " << isJustZeroAndOnes(s3, onlyZeros, onlyOnes) << ", " << onlyZeros << ", " << onlyOnes << endl;
    cout << "s4: " << isJustZeroAndOnes(s4, onlyZeros, onlyOnes) << ", " << onlyZeros << ", " << onlyOnes << endl;
    cout << "s5: " << isJustZeroAndOnes(s5, onlyZeros, onlyOnes) << ", " << onlyZeros << ", " << onlyOnes << endl;
    cout << "s6: " << isJustZeroAndOnes(s6, onlyZeros, onlyOnes) << ", " << onlyZeros << ", " << onlyOnes << endl;
    cout << "s7: " << isJustZeroAndOnes(s7, onlyZeros, onlyOnes) << ", " << onlyZeros << ", " << onlyOnes << endl;
    cout << "s8: " << isJustZeroAndOnes(s8, onlyZeros, onlyOnes) << ", " << onlyZeros << ", " << onlyOnes << endl;
    cout << "s9: " << isJustZeroAndOnes(s9, onlyZeros, onlyOnes) << ", " << onlyZeros << ", " << onlyOnes << endl;

    return 0;
}
