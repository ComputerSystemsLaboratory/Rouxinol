#include <iostream>
#include <cstdlib>

using namespace std;

#define MIN_OPERANDS 2
#define MAX_OPERANDS 100
#define MIN_OPERATOR 1
#define MAX_OPERATOR 99

class Stack {
public:
  Stack() {
  }
  ~Stack() {
  }
  void push(int operand) {
    operands[ptr++] = operand;
  }
  int pop() {
    return operands[--ptr];
  }
  void print() {
    cout << "[";
    cout << "ptr=" << ptr << "|";
    for(int i=0; i<ptr; i++) {
      cout << operands[i] << ",";
    }
    cout << "]" << endl;
  }
private:
  int ptr;
  int operands[MAX_OPERANDS + 1];
};

int main() {
  Stack stack;

  string input;
  while(cin >> input) {

    int value = atoi(input.c_str());
    if(value > 0) {
      stack.push(value);
      continue;
    }

    int r = stack.pop();
    int l = stack.pop();
    if(input == "+") {
      stack.push(l+r);
    } else if(input == "-") {
      stack.push(l-r);
    } else if(input == "*") {
      stack.push(l*r);
    } else if(input == "/") {
      stack.push(l/r);
    } else {
      cout << "err: unknown operator " << input << endl;
      return 1;
    }
  }

  cout << stack.pop() << endl;

  return 0;
}