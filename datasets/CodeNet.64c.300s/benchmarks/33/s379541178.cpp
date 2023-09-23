#include <iostream>
#include <string>
using namespace std;
int calculator(int, string, int);
int main() {
  int a, b;
  string op;
  cin >> a >> op >> b;
  while (op != "?") {
    cout << calculator(a, op, b) << endl;
    cin >> a >> op >> b;
  }
  //cout << calculator(calculator(3,"*",10),"+",7) << endl;
  //cout << calculator(3, "*", calculator(10,"+",7)) << endl;
}
int calculator(int a, string op, int b) {
  if (op == "+")
    return a + b;
  else if (op == "-")
    return a - b;
  else if (op == "*")
    return a * b;
  else // op == "/"
    return a / b;
}