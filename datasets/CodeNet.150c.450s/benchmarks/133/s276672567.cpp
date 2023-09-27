#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
using vll = vector<vl>;
using Pll = pair<ll, ll>;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(v) v.begin(), v.end()
#define sz(x) ((int) x.size())
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define F first
#define S second
const int MOD = 1e9+7;
const ll INF = 2e15;
template<class T> void print(const T& t){ cout << t << endl; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}

int main(){
  ll d;
  cin >> d;
  vl c(27);
  for(ll i=1;i<=26;i++){
    cin >> c[i];
  }
  vll s(d + 1, vl(27));
  for (ll i = 1; i <= d;i++){
    for (ll j = 1; j <= 26;j++){
      cin >> s[i][j];
    }
  }
  vl last(27, 0);
  ll satisfy = 0;
  for (ll i = 1; i <= d;i++){
    ll t;
    cin >> t;
    last[t] = i;
    satisfy += s[i][t];
    ll minus = 0;
    for (ll j=1; j <= 26;j++){
      minus += c[j] * (i - last[j]);
    }
    satisfy -= minus;
    print(satisfy);
  }
}