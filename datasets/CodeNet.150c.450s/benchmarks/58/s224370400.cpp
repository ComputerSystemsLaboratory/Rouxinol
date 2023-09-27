#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
using namespace std;

int main(void){
  stack<int> stk;
  int a, b, x, num;
  string s;
  
  while (cin >> s) {
    if (s[0] == '+' || s[0] == '-' || s[0] == '*') {
      a = stk.top(); stk.pop();
      b = stk.top(); stk.pop();
      if (s[0] == '+')
        stk.push(a + b);
      else if (s[0] == '-')
        stk.push(b - a);
      else if (s[0] == '*')
        stk.push(a * b);
    } else {
      stk.push(atoi(s.c_str()));
    }
  }
  cout << stk.top() << endl;
  
  return 0;
}