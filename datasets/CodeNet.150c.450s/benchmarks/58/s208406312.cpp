#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int top, S[1000];

void push(int x) {
  S[++top] = x;
}

int pop() {
  return S[top--];
}

int main() {
  int a, b;
  top = 0;
  string s;

  while (cin >> s) {
    if (s == "+") {
        b = pop();
        a = pop();
        push(a + b);
    } else if (s == "-") {
        b = pop();
        a = pop();
        push(a - b);
    } else if (s == "*")  {
        b = pop();
        a = pop();
        push(a * b);
    } else {
        push(atoi(s.c_str()));
    }
  }

  cout << pop() << endl;

  return 0;
}