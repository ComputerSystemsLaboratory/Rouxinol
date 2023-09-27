#include <iostream>
#include <stack>

using namespace std;

int main() {
  stack<int> cars;
  int command;  //??\???????????????

  while(cin >> command) {
    if (command == 0) {
      cout << cars.top() << endl;
      cars.pop();
    } else {
      cars.push(command);
    }
  }

  return 0;
}