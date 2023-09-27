#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
  char s[100];
  while(scanf("%s", s) != EOF) { //Ctr + D
    if(s[0] == '+') {
      a = pop();
      b = pop();
      push(a + b);
    } else if(s[0] == '-') {
      b = pop();
      a = pop();
      push(a-b);
    } else if(s[0] == '*') {
      a = pop();
      b = pop();
      push(a*b);
    } else {
      push(atoi(s));
    }
  }

  printf("%d\n", pop());

  return 0;
}

