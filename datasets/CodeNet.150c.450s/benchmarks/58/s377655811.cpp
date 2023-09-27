#include <iostream>
#include <string>
using namespace std;

int top;
int S[1000];

void push(int x) {
  top++;
  S[top] = x;
}

int pop() {
  return S[top--];
}

int main() {
  top = 0;
  string str[210];
  int i = 0;
  while (cin >> str[i]) {
    int a, b;
    if (str[i] == "+") {
      b = pop();
      a = pop();
      push(a + b);
    } else if (str[i] == "-") {
      b = pop();
      a = pop();
      push(a - b);
    } else if (str[i] == "*") {
      b = pop();
      a = pop();
      push(a * b);
    } else {
      int x = atoi(str[i].c_str());
      push(x);
    }
    i++;
  }

  cout << S[top] << endl;
  
  return 0;
}
