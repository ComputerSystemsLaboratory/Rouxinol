#include <iostream>
using namespace std;

int main()
{
  int a, b;
  char op;
  while (cin >> a >> op >> b) {
    if (op == '?') continue;
    int ans;
    switch (op) {
      case '+':
        ans = a + b;
        break;
      case '-':
        ans = a - b;
        break;
      case '*':
        ans = a * b;
        break;
      case '/':
        ans = a / b;
        break;
    }
    cout << ans << endl;
  }
  return 0;
}

