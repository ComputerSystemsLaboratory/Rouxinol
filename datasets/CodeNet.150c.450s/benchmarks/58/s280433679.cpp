#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;

class Mystack {
public:
  int top;
  int s[1000];

  void push(int x) {
    s[++top] = x;
  }

  int pop() {
    top--;
    return s[top + 1];
  }
};

int main(void) {
  Mystack stack;
  stack.top = 0;
  char input[100];
  while (scanf("%s", input) != EOF) {
    if (input[0] == '+') {
      int a = stack.pop();
      int b = stack.pop();
      stack.push(a + b);
    }
    else if (input[0] == '-') {
      int a = stack.pop();
      int b = stack.pop();
      stack.push(b - a);
    }
    else if (input[0] == '*') {
      int a = stack.pop();
      int b = stack.pop();
      stack.push(a * b);
    }
    else {
      stack.push(atoi(input));
    }
  }
  printf("%d\n", stack.pop());
  return 0;
}