#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define _GLIBCXX_DEBUG

void printv(vector<ll> v) {
  for (ll i : v)
    cout << i << endl;
}

int main() {
  while (true) {
    ll n, m;
    cin >> n >> m;
    if (!n && !m)
      break;
    ll danger = 0;
    vector<pair<ll, ll>> pairs;
    rep(i, n) {
      ll d, p;
      cin >> d >> p;
      danger += d * p;
      pairs.push_back(make_pair(p, d));
    }
    sort(pairs.begin(), pairs.end());
    ll re_m = m;
    ll cnt = 1;
    while (true) {
			if(cnt==n+1)break;
      if (pairs[n - cnt].second < re_m) {
        re_m -= pairs[n - cnt].second;
        danger -= pairs[n - cnt].second * pairs[n - cnt].first;
        cnt++;
      } else {
        danger -= re_m * pairs[n - cnt].first;
        break;
      }
    }
    cout << danger << endl;
  }
}

