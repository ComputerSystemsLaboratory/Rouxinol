#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  vector<int> result;
  while (true) {
    int a, b;
    string op;

    cin >> a >> op >> b;
    if (op == "?") {
      break;
    } else if (op == "+") {
      result.push_back(a + b);
    } else if (op == "-") {
      result.push_back(a - b);
    } else if (op == "*") {
      result.push_back(a * b);
    } else if (op == "/") {
      result.push_back(a / b);
    }
  }

  for (int i : result) {
    cout << i << endl;
  }
}
