#include <algorithm>
#include <iostream>
#include <string>
#include <random>
#include <cassert>
#include <cstring>
#include <chrono>
#include <set>
#include <map>

using namespace std;

typedef long long ll;

void Canonize(vector<ll>& a) {
  int n = a.size();
  for (;;) {
    bool ok = true;
    for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) if (i != j && (a[i] ^ a[j]) < a[i]) {
      a[i] ^= a[j];
      ok = false;
    }
    if (ok) break;
  }
  vector<ll> result;
  for (ll x : a) if (x > 0) result.push_back(x);
  a = result;
}

int main()
{
  ll tn;
  cin >> tn;
  for (ll tst = 0; tst < tn; ++tst) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) cin >> a[i];
    string s;
    cin >> s;
    reverse(a.begin(), a.end());
    reverse(s.begin(), s.end());
    vector<ll> v;
    int winner = 0;
    for (int t = 0; t < n; ++ t) {
      if (s[t] == '0') {
        v.push_back(a[t]);
        continue;
      } else {
        Canonize(v);
        int rank = v.size();
        v.push_back(a[t]);
        Canonize(v);
        if (v.size() > rank) {
          winner = 1;
          break;
        }
      }
    }
    cout << winner << endl;
  }
  return 0;
}
