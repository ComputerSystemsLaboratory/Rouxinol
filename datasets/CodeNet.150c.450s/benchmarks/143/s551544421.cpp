#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  int64_t a, b, ans = 0;
  unordered_map<int64_t,int64_t> m;
  for(int i=0; i<n; i++) {
    cin >> a;
    m[a]++;
    ans += a;
  }
  
  int q;
  cin >> q;
  for(int i=0; i<q; i++) {
    cin >> a >> b;
    m[b] += m[a];
    ans += (b-a)*m[a];
    m.erase(a);
    cout << ans << endl;
  }
  return 0;
}