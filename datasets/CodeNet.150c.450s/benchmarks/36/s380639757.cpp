#include <iostream>
using namespace std;

int main() {
  int d;
  while (cin >> d) {
    int sum = 0;
    for (int i = 0; i < 600 / d; i++) {
      int x = i * d;
      sum += x * x * d;
    }
    cout << sum << endl;
  }
}