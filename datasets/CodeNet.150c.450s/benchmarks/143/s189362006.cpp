#include <bits/stdc++.h>
using namespace std;
using ll=long long;
#define rep(i,n) for (ll i=0; i<n; ++i)
#define all(c) begin(c),end(c)
#define PI acos(-1)
#define oo LLONG_MAX
template<typename T1, typename T2>
bool chmax(T1 &a,T2 b){if(a<b){a=b;return true;}else return false;}
template<typename T1, typename T2>
bool chmin(T1 &a,T2 b){if(a>b){a=b;return true;}else return false;}
/*

*/
int main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  
  ll N, ans = 0; cin >> N;
  vector<ll> data(100010, 0);
  rep(i, N){
    ll a; cin >> a;
    data[a]++;
    ans += a;
  }
  ll Q; cin >> Q;
  rep(i, Q){
    ll b, c; cin >> b >> c;
    ans -= data[b] * b;
    ans += data[b] * c;
    data[c] += data[b];
    data[b] = 0;
    cout << ans << endl;
  }
}
