#include <iostream>
using namespace std;

int main() {
  int input01;
  int input02;  

  cin >> input01 >> input02;
  if(input01 > input02) {
    cout << "a > b" << endl;
  } else if(input01 < input02) {
    cout << "a < b" << endl;
  } else {
    cout << "a == b" << endl;
  }
  return 0;
} 