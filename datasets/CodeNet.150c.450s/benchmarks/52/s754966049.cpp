#include <iostream>

using namespace std;

int main() {
  int stack[10];
  int num = 0;
  int input;
  while (cin >> input) {
    if (input == 0) {
      cout << stack[--num] << endl;
    } else {
      stack[num++] = input;
    }
  }
  return 0;
}