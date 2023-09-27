#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<n;i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll>cnt(100001);
  rep(i,n) {
    int a;
    cin >> a;
    cnt[a]++;
  }
  int q;
  cin >> q;
  ll ans = 0;
  rep(i,100001) ans+=i*cnt[i];
  rep(i,q) {
    int b,c;
    cin >> b >> c;
    ans-=b*cnt[b];
    ans+=c*cnt[b];
    cnt[c]+=cnt[b];
    cnt[b]=0;
    cout << ans << endl;
  }
}