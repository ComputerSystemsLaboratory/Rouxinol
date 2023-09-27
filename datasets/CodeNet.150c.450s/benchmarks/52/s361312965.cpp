#include <iostream>
#include <stack>

using namespace std;

int main(void) {
  int num;
  stack<int> stk;

  while(cin >> num) {
    if(num == 0) {
      cout << stk.top() << endl;
      stk.pop();
    }
    else {
      stk.push(num);
    }
  }
  return 0;
}