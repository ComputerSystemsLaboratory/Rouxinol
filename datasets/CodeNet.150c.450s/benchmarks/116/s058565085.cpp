#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0;i < n;i++)
typedef long long ll;
const long long INF = 1LL<<60; // 仮想的な無限大の値

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

  int n, k;
  while(cin >> n >> k) {
    if (n == 0)
      break;
    vector<int> a(n);
    rep(i, n) 
      cin >> a[i];

    vector<int> s(n+1);
    rep(i, n){
      s[i+1] = s[i] + a[i];
    }

    int ans = 0;
    rep(i, n-k) {
      ans = max(ans, s[i+k] - s[i]);
    }

    cout << ans << endl;
  }
}
