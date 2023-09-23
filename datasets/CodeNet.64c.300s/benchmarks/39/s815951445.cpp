#include <iostream>
using namespace std;

int main() {
  int n, ans;
  while (cin >> n) {
    ans = 0;
    for (int i=0;i<10000;i++) {
      int a = i%10, b = i%100/10, c = i%1000/100, d = i%10000/1000;
      if (a + b + c + d == n) {
        // cout << " " << a << ", " << b << ", " << c << ", " << d << endl;
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}