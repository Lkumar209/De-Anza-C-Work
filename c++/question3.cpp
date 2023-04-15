#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// using namespace std;

// vector<int> removeNegatives(int arr[], int size) {
//     int negCount = 0;
//     bool allNegatives = true;
//     bool allZeros = true;

//     for (int i = 0; i < size; i++) {
//         if (arr[i] < 0) {
//             negCount++;
//             arr[i] = 0;
//         } else {
//             allNegatives = false;
//         }

//         if (arr[i] != 0) {
//             allZeros = false;
//         }
//     }

//     return {negCount, allNegatives, allZeros};
// }

// int main() {
//     int numList[] = {10, 20, 30, -1, 40, -1, 0, 50} ;
//     int size = sizeof(numList) / sizeof(numList[0]);

//     vector<int> result = removeNegatives(numList, size);

// cout << "Negative count: " << result[0] << "   All -1s before? " << (result[1] ? "true" : "false") << "   All 0s after? " << (result[2] ? "true" : "false") << endl;

//     return 0;
// }


bool removeNegatives(int arr[], int size, int& negCount, bool& allOnesBefore, bool& allZerosAfter) {
    negCount = 0;
    allOnesBefore = true;

    // Check if all elements are -1 before replacement
    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            allOnesBefore = false;
            break;
        }
    }

    // Replace negatives with 0 and count negatives
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negCount++;
            arr[i] = 0;
        }
    }

    allZerosAfter = true;

    // Check if all elements are 0 after replacement
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            allZerosAfter = false;
            break;
        }
    }
    return true;
}



int main() {
    // Example input arrays
    int numList0[] = {-1};
    int numList1[] = {-1, -1, -1};
    int numList2[] = {0};
    int numList3[] = {10, -1};
    int numList4[] = {0, -1};
    int numList5[] = {-1, 10};
    int numList6[] = {-1, 0};
    int numList7[] = {10, -1, 20, 30};
    int numList8[] = {10, -1, 0, -1};
    int numList9[] = {10, 20, 30, -1, 40, -1, 0, 50};

    // Process input arrays with removeNegatives and print results
    int negCount, size;
    bool allOnesBefore, allZerosAfter;

    size = sizeof(numList3) / sizeof(numList3[0]);
    removeNegatives(numList3, size, negCount, allOnesBefore, allZerosAfter);
    cout << "Negative count: " << negCount << "   All -1s before? " <<  boolalpha << allOnesBefore << "   All 0s after? " << boolalpha << allZerosAfter << endl;

    size = sizeof(numList6) / sizeof(numList6[0]);
    removeNegatives(numList6, size, negCount, allOnesBefore, allZerosAfter);
    cout << "Negative count: " << negCount << "   All -1s before? " << boolalpha << allOnesBefore << "   All 0s after? " << boolalpha << allZerosAfter << endl;

    size = sizeof(numList9) / sizeof(numList9[0]);
    removeNegatives(numList9, size, negCount, allOnesBefore, allZerosAfter);
    cout << "Negative count: " << negCount << "   All -1s before? " << boolalpha << allOnesBefore << "   All 0s after? " << boolalpha << allZerosAfter << endl;

    // Add more calls to removeNegatives for the other input arrays as needed
    // ...

    return 0;
}






#include <iostream>
#include <cstring> 
using namespace std;
#include <cstring>
#include <iomanip>

#include <iostream>
using namespace std;

bool removeNegatives(int arr[], int size, int& negCount, bool& allOnesBefore, bool& allZerosAfter) {
    negCount = 0;
    allOnesBefore = true;

    // Check if all elements are -1 before replacement
    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) {
            allOnesBefore = false;
            break;
        }
    }

    // Replace negatives with 0 and count negatives
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            negCount++;
            arr[i] = 0;
        }
    }

    allZerosAfter = true;

    // Check if all elements are 0 after replacement
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            allZerosAfter = false;
            break;
        }
    }
    return true;
}

int main() {
    // Example input arrays
    int numList0[] = {-1};
    int numList1[] = {-1, -1, -1};
    int numList2[] = {0};
    int numList3[] = {10, -1};
    int numList4[] = {0, -1};
  

    // I just tested these arrays with the size and got the results
    int negCount, size;
    bool allOnesBefore, allZerosAfter;

    size = 1;
    removeNegatives(numList0, size, negCount, allOnesBefore, allZerosAfter);
    cout << "Negative count: " << negCount << "   All -1s before? " <<  boolalpha << allOnesBefore << "   All 0s after? " << boolalpha << allZerosAfter << endl;

    size = 3;
    removeNegatives(numList1, size, negCount, allOnesBefore, allZerosAfter);
    cout << "Negative count: " << negCount << "   All -1s before? " << boolalpha << allOnesBefore << "   All 0s after? " << boolalpha << allZerosAfter << endl;

    size = 1;
    removeNegatives(numList2, size, negCount, allOnesBefore, allZerosAfter);
    cout << "Negative count: " << negCount << "   All -1s before? " << boolalpha << allOnesBefore << "   All 0s after? " << boolalpha << allZerosAfter << endl;

    size = 2;
    removeNegatives(numList3, size, negCount, allOnesBefore, allZerosAfter);
    cout << "Negative count: " << negCount << "   All -1s before? " << boolalpha << allOnesBefore << "   All 0s after? " << boolalpha << allZerosAfter << endl;

    size = 2;
    removeNegatives(numList4, size, negCount, allOnesBefore, allZerosAfter);
    cout << "Negative count: " << negCount << "   All -1s before? " << boolalpha << allOnesBefore << "   All 0s after? " << boolalpha << allZerosAfter << endl;


    return 0;
}