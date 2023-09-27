#include <algorithm>
#include <iostream>
using namespace std;
static const int MAX = 200000;

int data[MAX + 1];
int head = 0;

void push(int num) {
  data[head] = num;
  head++;
}

int pop() {
  head--;
  return data[head];
}

int main() {
  int a, b;
  char ch[100];
  while (cin >> ch) {
    switch (ch[0]) {
    case '+':
      a = pop();
      b = pop();
      push(b + a);
      break;
    case '-':
      a = pop();
      b = pop();
      push(b - a);
      break;
    case '*':
      a = pop();
      b = pop();
      push(b * a);
      break;
    default:
      push(atoi(ch));
      break;
    }
  }
  cout << data[0] << endl;
}