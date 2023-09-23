#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;

  while(1) {
    cin >> n;
    if (n == 0) break;

    int sum = 1, ans = 0;
    int s = 1, e = 2;
    while(s <= e && e <= n) {
      if (sum == n) ans++;
      else if(sum > n) {
        sum -= s;
        s++;
        continue;
      }
      sum += e;
      e++;
    }

    cout << ans << endl;
  }

}