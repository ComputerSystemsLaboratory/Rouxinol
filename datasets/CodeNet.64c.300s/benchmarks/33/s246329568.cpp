#include<cstdio>
#include<iostream>
using namespace std;

#define ll long long

int main() {
  ll a, b;
  char op;

  while (true) {
    cin >> a >> op >> b;
    if (op == '?') break;
    if (op == '+') cout << a + b;
    if (op == '-') cout << a - b;
    if (op == '*') cout << a * b;
    if (op == '/') cout << a / b;
    cout << "\n";
  }
  cout << flush;

  return 0;
}
  