#include <iostream>
#include <iomanip>
using namespace std;

void isTheFirstThreeTheSameAsTheLastThree(int *arr, int size, bool &firstThreeSame, bool &special) {
    firstThreeSame = false;
    special = false;
   
    if (size < 3) {
        return;
    }
   
    if (*(arr) == *(arr + size - 3) && *(arr + 1) == *(arr + size - 2) && *(arr + 2) == *(arr + size - 1)) {
        firstThreeSame = true;
    }
   
    if (*(arr + size - 1) == *(arr + size - 2) && *(arr + size - 1) == *(arr + size - 3)) {
        special = true;
    } else if (*(arr + size - 1) - *(arr + size - 2) == 1 && *(arr + size - 2) - *(arr + size - 3) == 1) {
        special = true;
    }
}

int main() {
    // Test cases
    int numList0[] = {10};
    int numList1[] = {10, 20};
    int numList2[] = {10, 20, 30};
    int numList3[] = {10, 10, 10};
    int numList4[] = {10, 11, 12};
    int numList5[] = {10, 10, 10, 10};
    int numList6[] = {10, 10, 10, 10, 10};
    int numList7[] = {10, 20, 30, 10, 20, 30};
    int numList8[] = {10, 20, 30, 40, 10, 20, 30};
    int numList9[] = {10, 11, 12, 13, 10, 11, 12};
   
    bool firstThreeSame, special;
   
    isTheFirstThreeTheSameAsTheLastThree(numList0, 1, firstThreeSame, special);
    cout << boolalpha << firstThreeSame << " " << boolalpha << special << endl;  
   
    isTheFirstThreeTheSameAsTheLastThree(numList1, 2, firstThreeSame, special);
    cout  << boolalpha << firstThreeSame << " "   << boolalpha << special << endl;  
   
    isTheFirstThreeTheSameAsTheLastThree(numList2, 3, firstThreeSame, special);
    cout   << boolalpha << firstThreeSame << " "   << boolalpha << special << endl; 
   
    isTheFirstThreeTheSameAsTheLastThree(numList3, 3, firstThreeSame, special);
    cout  << boolalpha << firstThreeSame << " "  << boolalpha << special << endl;  
   
    isTheFirstThreeTheSameAsTheLastThree(numList4, 3, firstThreeSame, special);
    cout  << boolalpha << firstThreeSame << " "  << boolalpha << special << endl;  
 
  isTheFirstThreeTheSameAsTheLastThree(numList5, 4, firstThreeSame, special);
    cout  << boolalpha << firstThreeSame << " "  << boolalpha << special << endl;  
   
    isTheFirstThreeTheSameAsTheLastThree(numList6, 5, firstThreeSame, special);
    cout  << boolalpha << firstThreeSame << " "  << boolalpha << special << endl;  
   
    isTheFirstThreeTheSameAsTheLastThree(numList7, 6, firstThreeSame, special);
    cout  << boolalpha << firstThreeSame << " "  << boolalpha << special << endl;  
   
    isTheFirstThreeTheSameAsTheLastThree(numList8, 7, firstThreeSame, special);
    cout  << boolalpha << firstThreeSame << " "  << boolalpha << special << endl;  
   
    isTheFirstThreeTheSameAsTheLastThree(numList9, 7, firstThreeSame, special);
    cout  << boolalpha << firstThreeSame << " "  << boolalpha << special << endl;  
   
   
   
   
   
    return 0;
}
