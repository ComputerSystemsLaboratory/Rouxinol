#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n - k; i++) {
    if(a[i] < a[i + k]) {
      cout << "Yes\n";
    } else cout << "No\n";
  }
  return 0;
}
