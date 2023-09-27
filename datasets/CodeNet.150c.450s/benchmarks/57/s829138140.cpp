#include <iostream>
using namespace std;

int main (int argc, char **argv) {
  int a, b;
  char op;
  int x;
  
  while (cin >> a >> op >> b) {
    if (op == '?') break;
    switch (op) {
    case '+': x = a + b; break;
    case '-': x = a - b; break;
    case '*': x = a * b; break;
    case '/': x = a / b; break;
    }
    cout << x << endl;
  }
}