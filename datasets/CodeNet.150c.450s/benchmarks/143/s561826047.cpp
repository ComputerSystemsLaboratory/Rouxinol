#include <bits/stdc++.h>
using namespace std;

// ----------- define --------------
#define int long long
#define vi vector<int>
#define vc vector<char>
#define ii pair<int,int>
#define fi first
#define sc second
#define stoi stoll
#define all(x) (x).begin(),(x).end()
#define get_bit(x, k) ((x >> k) & 1)
// ---------------------------------

void MAIN() {
  int n; cin >> n;
  const int V = 100000;
  vector<int> m(V + 1);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    int t; cin >> t;
    sum += t;
    m[t]++;
  }
  int q; cin >> q;
  while (q--) {
    int b, c;
    cin >> b >> c;
    sum -= b * m[b];
    sum += c * m[b];
    m[c] += m[b];
    m[b] = 0;
    cout << sum << '\n';
  }
}

signed main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int T = 1;
  // cin >> T;
  while (T--) MAIN();
}
