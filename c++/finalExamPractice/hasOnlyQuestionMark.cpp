#include <iostream>

using namespace std;

int hasOnlyQuestionMark(char* c_str_arry[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        char* str = c_str_arry[i];
        int j = 0;
        while (str[j] != '\0') {
            if (str[j] != '?') {
                break;
            }
            j++;
        }
        if (str[j] == '\0') {
            count++;
        }
    }
    return count;
}

int main() {
    char s1[] = {'?', '\0'} ;
    char s2[] = {'H', 'e', 'l', 'l', 'o', '?', '\0'} ;
    char s3[] = {'H', '?', 'e', '\0'} ;
    char s4[] = {'H', '\0'} ;
    char *c_str_arry[] = {s1, s2, s3, s4} ;
    cout << hasOnlyQuestionMark(c_str_arry,4) << endl ;
    return 0 ;
}
