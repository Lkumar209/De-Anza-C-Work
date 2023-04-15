#include <iostream>

using namespace std;
int readNumUntilZeroZero()
{
    string num;
    string num1;
    int count = 0;
    bool secondZero = false;
    cout << "Please enter the list ending with zero and zero: " << endl;
    cin >> num;

    while(!secondZero)
    {
         cin >> num1;
        if(num == "0" && num1 == "0")
        {
            secondZero = true;
        }
        else
        {
            num = num1;
            count ++;
        }
    }
    return count;
}

int main() {
    int count = readNumUntilZeroZero();
    cout << "Count: " << count << endl;
    return 0;
}




