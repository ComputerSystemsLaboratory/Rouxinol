#include <iostream>
using namespace std;

int main() {
  int n;
  int x = 100000;
  double ans = 100000;
  cin >> n;
  for (int i=0;i<n;i++) {
    ans *= 1.05;
    x = ans;
    if (x % 1000 > 0) x = (x / 1000 + 1) * 1000;
    ans = x;
  }
  cout << x << endl;
  return 0;
}