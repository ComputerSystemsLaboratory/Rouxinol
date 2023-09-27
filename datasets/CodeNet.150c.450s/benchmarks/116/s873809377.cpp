#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
const ll INF = 1LL<<60;

int main()
{
  ll n, k;
  while (cin>>n>>k){
    if (n == 0) continue;

    ll sum = -INF;
    vector<ll> a(n);
    rep(i, n) cin>>a[i];

    vector<ll> s(n+1, 0);
    rep(i, n) s[i+1] = s[i] + a[i];

    for(int i=0; i < n-k; i ++){
      ll tmp = s[i+k] - s[i];
      if (sum < tmp) sum = tmp;
    }
    cout << sum << endl;
  }
}
