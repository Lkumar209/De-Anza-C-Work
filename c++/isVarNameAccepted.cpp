#include <iostream>
#include <iomanip>
using namespace std;

bool isVarNameAccepted(const char str[], int& upperCount, int& lowerCount) {
    upperCount = 0;
    lowerCount = 0;
    bool valid = true;

    if (str[0] >= '0' && str[0] <= '9') {
        valid = false;
    } else if (str[0] >= 'A' && str[0] <= 'Z') {
        upperCount++;
    } else if (str[0] >= 'a' && str[0] <= 'z') {
        lowerCount++;
    } else {
        valid = false;
    }

    int i = 1;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            upperCount++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lowerCount++;
        } else if (str[i] >= '0' && str[i] <= '9') {

        } else {
            valid = false;
        }
        i++;
    }

    return valid;
}



int main() {
    // I tested the function with the following test cases that you gave us:
    char str1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int numUpper1 = 0, numLower1 = 0;
    bool result1 = isVarNameAccepted(str1, numUpper1, numLower1);
    cout <<  boolalpha << result1 << ", " << numUpper1 << ", " << numLower1 << endl;

    char str2[] = {'H', 'e', ' ', 'l', '\0'};
    int numUpper2 = 0, numLower2 = 0;
    bool result2 = isVarNameAccepted(str2, numUpper2, numLower2);
    cout <<  boolalpha << result2 << ", " << numUpper2 << ", " << numLower2 << endl;

    char str3[] = {'\0'};
    int numUpper3 = 0, numLower3 = 0;
    bool result3 = isVarNameAccepted(str3, numUpper3, numLower3);
    cout <<  boolalpha << result3 << ", " << numUpper3 << ", " << numLower3 << endl;

    char str4[] = {'1', 'H', '\0'};
    int numUpper4 = 0, numLower4 = 0;
    bool result4 = isVarNameAccepted(str4, numUpper4, numLower4);
    cout <<  boolalpha << result4 << ", " << numUpper4 << ", " << numLower4 << endl;

    char str5[] = {'H', '1', '\0'};
    int numUpper5 = 0, numLower5 = 0;
    bool result5 = isVarNameAccepted(str5, numUpper5, numLower5);
    cout <<  boolalpha << result5 << ", " << numUpper5 << ", " << numLower5 << endl;

    char str6[] = {'h', '1', '\0'};
    int numUpper6 = 0, numLower6 = 0;
    bool result6 = isVarNameAccepted(str6, numUpper6, numLower6);
    cout << boolalpha << result6 << ", " << numUpper6 << ", " << numLower6 << endl;

    return 0;
}
