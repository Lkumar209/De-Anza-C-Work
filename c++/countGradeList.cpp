#include <iostream>
using namespace std;

int countGradeList(int& count){
  int passCount = 0, aCount = 0, invalidCount = 0;
  char grade;
  for (int i = 0; i < count; i++){
    cout << "Enter the grade: ";
    cin >> grade;
    if (grade == 'A' || grade == 'B' || grade == 'C'){
      passCount++;
      if (grade == 'A')
        aCount++;
    }
    else if (grade != 'D' && grade != 'F')
      invalidCount++;
  }
 
  cout << "Number of grades passing: " << passCount << endl;
  cout << "Number of 'A' grades: " << aCount << endl;
  cout << "Number of invalid grades: " << invalidCount << endl;
  return count;
}

int main(){
  int count;
  cout << "How many grades would you like to enter? ";
  cin >> count;
  countGradeList(count);
  return 0;
}
