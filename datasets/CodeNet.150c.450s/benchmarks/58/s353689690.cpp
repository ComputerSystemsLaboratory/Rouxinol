#include <iostream>
#include <cstdlib>
#include <stack>
using namespace std;

stack<int> S;

int main() {
  char ch[7];
  while (cin >> ch) {
    int a, b;
    switch (ch[0]) {
      case '+':
        a = S.top(); S.pop();
        b = S.top(); S.pop();
        S.push(a + b);
        break;
      case '-':
        b = S.top(); S.pop();
        a = S.top(); S.pop();
        S.push(a - b);
        break;
      case '*':
        a = S.top(); S.pop();
        b = S.top(); S.pop();
        S.push(a * b);
        break;
      default:
        S.push(atoi(ch));
        break;
    }
  }
  cout << S.top() << endl;
  return 0;
}