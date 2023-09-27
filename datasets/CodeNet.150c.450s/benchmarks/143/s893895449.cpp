#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
    int n;
    cin >> n;
    ll sum = 0;
    map<int, int> mp;
    rep(i,n) {
      int a;
      cin >> a;
      sum += a;
      mp[a]++;
    }
    int q;
    cin >> q;
    rep(i,q) {
      int b, c;
      cin >> b >> c;
      sum += (c-b)*mp[b];
      mp[c] += mp[b];
      mp[b] = 0;
      cout << sum << endl;
    }
    return 0;
}