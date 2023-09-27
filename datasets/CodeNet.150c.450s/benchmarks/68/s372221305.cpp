#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9 + 10;

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    sort(a.begin(), a.end());

    int ans = INF;
    
    for (int i = 0; i < n - 1; i++) {
      ans = min(ans, abs(a[i] - a[i + 1]));
    }

    cout << ans << endl;
    
    
  }
  
  return 0;
}