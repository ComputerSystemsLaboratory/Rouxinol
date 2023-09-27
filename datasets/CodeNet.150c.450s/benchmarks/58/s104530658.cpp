#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;
int top, s[MAX + 1];

void initialize() { top = 0; }

bool isEmpty() { return top == 0; }

bool isFull() { return top >= MAX; }

void push(int x) {
  if (isFull()) {
    fprintf(stderr, "error: stack is full\n");
    exit(1);
  }
  top++;
  s[top] = x;
}

int pop() {
  if (isEmpty()) {
    fprintf(stderr, "error: stack is empty\n");
    exit(1);
  }
  top--;
  return s[top + 1];
}

int main() {
  initialize();
  string str;
  while (cin >> str) {
    if (isdigit(str[0])) {
      push(atoi(str.c_str()));
    } else {
      int b = pop();
      int a = pop();
      if (str == "+")
        push(a + b);
      else if (str == "-")
        push(a - b);
      else if (str == "*")
        push(a * b);
    }
  }
  printf("%d\n", pop());
  return 0;
}