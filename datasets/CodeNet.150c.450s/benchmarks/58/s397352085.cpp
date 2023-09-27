#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Stack {
  private:
    int top;
    int a[100];

  public:
    static const int MAX = 100;

    Stack() {
      top = 0;
    }

    bool isEmpty() {
      return top == 0;
    }

    bool isFull() {
      return top >= MAX;
    }

    void push(int x) {
      if (isFull()) {
        cout << "full" << endl;
        return;
      }
      top++;
      a[top] = x;
    }

    int pop() {
      if (isEmpty()) {
        cout << "empty" << endl;
        return 0;
      }
      top --;
      return a[top + 1];
    }
};

int main() {
  Stack stack;
  string str;
  int x;
  while (cin >> str) {
    if (str == "+") {
      stack.push(stack.pop() + stack.pop());
    } else if (str == "-") {
      x = stack.pop();
      stack.push(stack.pop() - x);
    } else if (str == "*") {
      stack.push(stack.pop() * stack.pop());
    } else {
      stack.push(atoi(str.c_str()));
    }
  }

  cout << stack.pop() << endl;
  return 0;
}