#include <iostream>
using namespace std;

int main() {
  int n;
  int a[31] = {1, 1, 2};
  for (int i = 3; i < 31; i++)
    a[i] = a[i - 1] + a[i - 2] + a[i - 3];

  while (true) {
    cin >> n;
    if (n == 0) return 0;
    cout << a[n] / 10 / 365 + 1 << endl;
  }
}