#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define chmax(x,y) x = max(x,y);
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};
const int INF = 1001001001;

int main() {
    int n;
    cin >> n;
    ll cnt = 0;
    map<int, int> mp;
    rep(i,n) {
      int a;
      cin >> a;
      mp[a]++;
      cnt += a;
    }
    int q;
    cin >> q;
    rep(i,q) {
      int b, c;
      cin >> b >> c;
      cnt += (c-b)*mp[b];
      mp[c] += mp[b];
      mp[b] = 0;
      printf("%lld\n", cnt);
    }
    return 0;
}