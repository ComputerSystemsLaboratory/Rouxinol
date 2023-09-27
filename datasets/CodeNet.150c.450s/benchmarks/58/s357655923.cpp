#include<stdio.h>
#include<stdlib.h>
using namespace std;

class Stack {
  int top;
  int V[200];

  public:
    Stack() { top = 0; }
    void push(int x) {
      V[top++] = x;
    }
    int pop() {
      return V[--top];
    }
};

int main() {
  char c[10];
  int a, b;
  Stack stack;

  while( scanf("%s", c) != EOF ) {
    switch(c[0]) {
      case '+':
        a = stack.pop();
        b = stack.pop();
        stack.push(a+b);
        break;
      case '-':
        a = stack.pop();
        b = stack.pop();
        stack.push(b-a);
        break;
      case '*':
        a = stack.pop();
        b = stack.pop();
        stack.push(a*b);
        break;
      default:
        stack.push(atoi(c));
    }
  }

  printf("%d\n", stack.pop());
  return 0;
}

