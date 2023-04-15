#include <iostream>
#include <iomanip>
using namespace std;

bool findLargestInfo(int arr[], int size, int& largest, bool& isFirstOrLast, int& count) {
    largest = arr[0];
    count = 1;
    isFirstOrLast = false;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            count = 1;
        } else if (arr[i] == largest) {
            count++;
        }
    }

    if (arr[0] == largest || arr[size - 1] == largest) {
        isFirstOrLast = true;
    }
    return isFirstOrLast;
}

int main() {
    // I tested the function with the following test cases that you gave us:
    int arr1[] = {10};
    int size1 = 1;
    int largest1, count1;
    bool isFirstOrLast1;

    findLargestInfo(arr1, size1, largest1, isFirstOrLast1, count1);
    cout <<  largest1 << ", " << boolalpha << isFirstOrLast1 << " and " << count1 << endl;
  

    int arr2[] = {10, 10};
    int size2 = 2;
    int largest2, count2;
    bool isFirstOrLast2;

    findLargestInfo(arr2, size2, largest2, isFirstOrLast2, count2);
    cout << largest2 << ", " << boolalpha << isFirstOrLast2 << " and " << count2 << endl;


    int arr3[] = {10, 20, 10};
    int size3 = 3;
    int largest3, count3;
    bool isFirstOrLast3;

    findLargestInfo(arr3, size3, largest3, isFirstOrLast3, count3);
    cout << largest3 << ", " << boolalpha << isFirstOrLast3 << " and " << count3 << endl;
 

    int arr4[] = {10, 20, 20, 10};
    int size4 = 4;
    int largest4, count4;
    bool isFirstOrLast4;

    findLargestInfo(arr4, size4, largest4, isFirstOrLast4, count4);
    cout << largest4 << ", " << boolalpha << isFirstOrLast4 << " and " << count4 << endl;
   

    int arr5[] = {10, 5, 2, 3, 4, 10};
    int size5 = 6;
    int largest5, count5;
    bool isFirstOrLast5;

    findLargestInfo(arr5, size5, largest5, isFirstOrLast5, count5);
    cout << largest5 << ", " << boolalpha << isFirstOrLast5 << " and " << count5 << endl;
  
    int arr6[] = {50, 20, 30, 40, 10};
    int size6 = 5;
    int largest6, count6;
    bool isFirstOrLast6;

    findLargestInfo(arr6, size6, largest6, isFirstOrLast6, count6);
    cout << largest6 << ", " << boolalpha << isFirstOrLast6 << " and " << count6 << endl;
    

    int arr7[] = {10, 30, 40, 10};
    int size7 = 4;
    int largest7, count7;
    bool isFirstOrLast7;

    findLargestInfo(arr7, size7, largest7, isFirstOrLast7, count7);
    cout << largest7 << ", " << boolalpha << isFirstOrLast7 << " and " << count7 << endl;
    return 0;
}