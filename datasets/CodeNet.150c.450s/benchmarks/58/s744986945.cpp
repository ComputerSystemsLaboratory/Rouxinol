#include <bits/stdc++.h>
using namespace std;

int top;
int S[110];

void push(int x) {
  S[++top] = x;
}

int pop() {
  top--;
  return S[top + 1];
}

int main() {
  top = 0;
  char c[100];
  int a, b;
  while (true) {
    if (!(cin >> c)) {
      break;
    }
    if (c[0] == '+') {
      b = pop();
      a = pop();
      push(a + b);
    }
    else if (c[0] == '-') {
      b = pop();
      a = pop();
      push(a - b);
    }
    else if (c[0] == '*') {
      b = pop();
      a = pop();
      push(a * b);
    }
    else {
      push(stoi(c));
    }
  }
  cout << pop() << endl;
}
