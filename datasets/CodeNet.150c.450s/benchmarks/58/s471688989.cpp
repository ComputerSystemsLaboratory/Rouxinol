#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
  int a, b;
  stack<int> s;
  string t;

  while (cin >> t) {
    if (t[0] == ' ') {
      cout << "[*] space!" << endl;
    }

    if (t[0] >= '0' && t[0] <= '9') {
      a = atoi(t.c_str());
      s.push(a);
      continue;
    }

    b = s.top();
    s.pop();
    a = s.top();
    s.pop();

    switch (t[0]) {
      case '+': s.push(a + b); break;
      case '-': s.push(a - b); break;
      case '*': s.push(a * b); break;
    }
  }

  cout << s.top() << endl;

  return 0;
}