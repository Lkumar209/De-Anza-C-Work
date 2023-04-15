#include <iostream>
using namespace std;

bool hasDashDash(char str[], bool& bool1, bool& bool2) {
    int len = 0;
    bool1 = false;
    bool2 = false;
    while (str[len] != '\0') {
        len++;
    }
    if (len < 2) {
        return false;
    }
    for (int i = 0; i < len - 1; i++) {
        if (str[i] == '-' && str[i+1] == '-') {
            bool1 = true;
            break;
        }
    }
    if (str[0] == '-' && str[1] == '-') {
        bool2 = true;
    }
    if (str[len-2] == '-' && str[len-1] == '-') {
        bool2 = true;
    }
    return bool1 || bool2;
}


int main() {
    //These following char strings return true and true
    char s1[] = { '-', '-', '\0' }; 
    bool result1, result2;
    bool resultant1 = hasDashDash(s1, result1, result2);
    cout  << boolalpha << result1 << " and " << result2 << endl;

    char s2[] = { 'a', '-', '-', '\0' } ; 
    bool result3, result4;
    bool resultant2 = hasDashDash(s2, result3, result4);
    cout << boolalpha << result3 << " and " << result4 << endl;


    char s3[] = { '-', '-', 'a', '\0' } ; 
    bool result5, result6;
    bool resultant3 = hasDashDash(s3, result5, result6);
    cout << boolalpha << result5 << " and " << result6 << endl;
    cout << endl;
    //This char string will return true and false 

    char s4[] = { 'a', '-', '-', 'b', '\0' } ;
    bool result7, result8;
    bool resultant4 = hasDashDash(s4, result7, result8);
    cout << boolalpha << result7 << " and " << result8 << endl;
    cout << endl;

    // These char strings will return false and false

    char s5[] = { '\0' } ;
    bool result9, result10;
    bool resultant5 = hasDashDash(s5, result9, result10);
    cout<< boolalpha << result9 << " and " << result10 << endl;

    char s6[] = { '-', '\0' } ;
    bool result11, result12;
    bool resultant6 = hasDashDash(s6, result11, result12);
    cout << boolalpha << result11 << " and " << result12 << endl;

    char s7[] = { '-', 'a', '-', '\0' } ;
    bool result13, result14;
    bool resultant7 = hasDashDash(s7, result13, result14);
    cout << boolalpha << result13 << " and " << result14 << endl;

    char s8[] =  { 'a', '-', 'b', '-', '\0' } ;
    bool result15, result16;
    bool resultant8 = hasDashDash(s8, result15, result16);
    cout << boolalpha << result15 << " and " << result16 << endl;

    char s9[] = { '-', 'a', 'b', '-', '\0' } ;
    bool result17, result18;
    bool resultant9 = hasDashDash(s9, result17, result18);
    cout << boolalpha << result17 << " and " << result18 << endl;
    return 0;
}