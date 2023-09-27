#include <bits/stdc++.h>
using namespace std;

int main(){
  int d;
  while (cin >> d) {
    int n = 600 / d;
    int ans = 0;
    for (int i = 1; i <= n - 1; i++) {
      ans += i * d * d * i * d;
    }
    cout << ans << endl;
  }
}

