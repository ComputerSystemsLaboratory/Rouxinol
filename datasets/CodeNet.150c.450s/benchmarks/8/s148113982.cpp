#include<iostream>
using namespace std;

int main(void) {
  string firstInput;
  string secondInput;

  int firstScore = 0;
  int secondScore = 0;

  int num;
  cin >> num;
  for(int i = 0; i < num; i++) {
    cin >> firstInput;
    cin >> secondInput;
    int cond = firstInput.compare(secondInput);
    if(cond == 0) {
      firstScore += 1;
      secondScore += 1;
    }
    else if(cond > 0) {
      firstScore += 3;
    }
    else {
      secondScore += 3;
    }
  }

  cout << firstScore << " " << secondScore << endl;
  return 0;
}