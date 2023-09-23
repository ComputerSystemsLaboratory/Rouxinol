#include <iostream>
using namespace std;

int main() {
  std::cin.tie(0);
  std::ios::sync_with_stdio(false);

  int i;
  int d, sum;

  while (cin >> d) {
    sum = 0;

    for (i = 0; (i * d != 600); i++) {
      sum += d * (i * i * d * d);
    }

    cout << sum << endl;
  }

  return 0;
}