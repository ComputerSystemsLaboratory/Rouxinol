#include <cstdlib>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  stack<int> cars;
  string line;
  while (getline(cin, line)) {
    int car = atoi(line.c_str());
    if (car == 0) {
      cout << cars.top() << endl;
      cars.pop();
    } else {
      cars.push(car);
    }
  }

  return 0;
}