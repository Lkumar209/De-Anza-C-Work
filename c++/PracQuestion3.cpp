#include <iostream>
#include <iomanip>
using namespace std;

bool isIncrementingBy1(int numList[], int size, bool &allPositive)
{
    bool result = true;
    allPositive = true;

    for (int i = 1; i < size; i++)
    {
        if (numList[i] != numList[i-1]+1)
        {
            result = false;
            break;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (numList[i] <= 0)
        {
            allPositive = false;
            break;
        }
    }

    return result;
}

int main()
{
    // I tested all the cases and they are correct.
    int numList0[] = {10};
    bool allPositive0;
    bool result0 = isIncrementingBy1(numList0, 1, allPositive0);
    cout << boolalpha << result0 << " and " << allPositive0 << endl;

    int numList1[] = {10, 11, 12, 13};
    bool allPositive1;
    bool result1 = isIncrementingBy1(numList1, 4, allPositive1);
    cout << boolalpha << result1 << " and " << allPositive1 << endl;

    int numList2[] = {0, 1, 2};
    bool allPositive2;
    bool result2 = isIncrementingBy1(numList2, 3, allPositive2);
    cout << boolalpha << result2 << " and " << allPositive2 << endl;

    int numList3[] = {-1};
    bool allPositive3;
    bool result3 = isIncrementingBy1(numList3, 1, allPositive3);
    cout << boolalpha << result3 << " and " << allPositive3 << endl;

    int numList4[] = {-1, 0, 1};
    bool allPositive4;
    bool result4 = isIncrementingBy1(numList4, 3, allPositive4);
    cout << boolalpha << result4 << " and " << allPositive4 << endl;

    int numList5[] = {10, 11, 13};
    bool allPositive5;
    bool result5 = isIncrementingBy1(numList5, 3, allPositive5);
    cout << boolalpha << result5 << " and " << allPositive5 << endl;

    int numList6[] = {10, 12};
    bool allPositive6;
    bool result6 = isIncrementingBy1(numList6, 2, allPositive6);
    cout << boolalpha << result6 << " and " << allPositive6 << endl;

    int numList7[] = {0, 1, 3};
    bool allPositive7;
    bool result7 = isIncrementingBy1(numList7, 3, allPositive7);
    cout << boolalpha << result7 << " and " << allPositive7 << endl;

    int numList8[] = {-1, 0, 1, 2, 4};
    bool allPositive8;
    bool result8 = isIncrementingBy1(numList8, 5, allPositive8);
    cout << boolalpha << result8 << " and " << allPositive8 << endl;

    return 0;
}
