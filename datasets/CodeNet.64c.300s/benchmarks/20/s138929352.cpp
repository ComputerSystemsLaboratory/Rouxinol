#include <iostream>

using namespace std;

int main() {
  int d;
  while (cin >> d) {
    int ans = 0;
    for (int x = d; x < 600; x += d) {
      ans += x * x;
    }
    ans *= d;
    cout << ans << endl;

  }

  return 0;
}