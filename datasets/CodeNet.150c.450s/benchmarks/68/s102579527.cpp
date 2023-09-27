#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> v(n);
    rep(i, n) {
      cin >> v.at(i);
    }
    sort(v.begin(), v.end());
    int ans = 1000000; 
    rep(i, n - 1) {
      ans = min(ans, v.at(i + 1) - v.at(i));
    }
    cout << ans << endl;
  }
}

