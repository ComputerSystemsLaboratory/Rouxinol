#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int count = 0;
    for(int i = 0; i < n / 2; ++i) {
      string op1, op2;
      cin >> op1 >> op2;
      if((op1 == "lu" && op2 == "ru") || (op1 == "ru" && op2 == "lu") || (op1 == "ld" && op2 == "rd") || (op1 == "rd" && op2 == "ld")) ++count;
    }
    if(n % 2) {
      string a;
      cin >> a;
    }
    cout << count << endl;
  }
  return 0;
}