#include <bits/stdc++.h>


using namespace std;
using ll = long long;


int main() {
    ll n, q, res = 0;
    unordered_map<ll, ll> mp;
    cin >> n;
    vector<ll> a(n);
    for(auto& x : a) {
      cin >> x;
      mp[x]++;
      res += x;
    }
    cin >> q;
    while(q--) {
      ll b, c;
      cin >> b >> c;
      if(mp.find(b) != mp.end()) {
        res += (c - b) * mp[b];
        mp[c] += mp[b];
        mp.erase(b);
      }
      cout << res << "\n";
    }
  return 0;
}

