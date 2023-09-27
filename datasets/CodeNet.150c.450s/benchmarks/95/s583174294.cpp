#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  string input;

  while (true) {
    cin >> n;
    if (n == 0) { break; }

    int count = 0, left = 0, right = 0, last = 0;

    for (int i = 0; i < n; i++) {
      cin >> input;
      if      (input == "lu" && left == 0)  { left = 1; }
      else if (input == "ru" && right == 0) { right = 1; }
      else if (input == "ld" && left == 1)  { left = 0; }
      else if (input == "rd" && right == 1) { right = 0; }

      if (last == 0 && left == 1 && right == 1) { last = 1; count++; }
      if (last == 1 && left == 0 && right == 0) { last = 0; count++; }
    }

    cout << count << endl;
  }
  return 0;
}