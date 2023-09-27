#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
ll inf = 1e9;

int main() {
  while (true) {
    ll n, m;
    cin >> n >> m;
    if (!n && !m)
      break;

    vector<ll> sumh(1510);
    for (int i = 1; i <= n; i++) {
      ll h;
      cin >> h;
      sumh[i] = sumh[i - 1] + h;
    }
    vector<ll> sumsh(1500010);
    for (int i = 0; i <= n; i++) {
      for (int j = i + 1; j <= n; j++) {
        sumsh.at(sumh[j] - sumh[i])++;
      }
    }

    vector<ll> sumw(1510);
    for (int i = 1; i <= m; i++) {
      ll w;
      cin >> w;
      sumw[i] = sumw[i - 1] + w;
    }
    vector<ll> sumsw(1500010);
    for (int i = 0; i <= m; i++) {
      for (int j = i + 1; j <= m; j++) {
        sumsw.at(sumw[j] - sumw[i])++;
      }
    }

    ll ans = 0;
    for (int i = 1; i <= 1500000; i++) {
      ans += sumsh[i] * sumsw[i];
    }
    cout << ans << endl;
  }
}

