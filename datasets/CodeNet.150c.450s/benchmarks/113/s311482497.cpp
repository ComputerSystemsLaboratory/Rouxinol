#include <iostream>
using namespace std;

int main() {
  int i = 1;
  int input = 1;
  while(1) {
    cin >> input;
    if (!input) {
      break;
    }
    cout << "Case " << i << ": " << input << endl;
    i++;
  }

  return 0;
}