#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  while (true) {
    int n;
    cin >> n;
    if (n == 0) return 0;
    
    int ans = 0, cnt = 0;
    vector<string> f(n);
    for (int i = 0; i < n; i++) {
      cin >> f.at(i);
      if (f.at(i).at(1) == 'u') cnt++;
      else cnt--;
      if (abs(cnt) == 2) {
        ans++;
        cnt = 0;
      }
    }
    
    cout << ans << '\n';
  }
}
