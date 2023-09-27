#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int n, k;
  cin >> n >> k;
  
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a.at(i);
  
  for (int i = k; i < n; i++) {
    if (a.at(i - k) < a.at(i)) cout << "Yes\n";
    else cout << "No\n";
  }
}