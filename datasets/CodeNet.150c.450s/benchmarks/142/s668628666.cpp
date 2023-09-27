#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for(int i = 0;i < n;i++) {
    cin >> v[i];
    if(i >= k) cout << (v[i-k] < v[i] ? "Yes" : "No") << endl;
  }
}