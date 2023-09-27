#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(ll i = 0; i < n; i++)
#define per(i,n) for(ll i = n-1; i >= 0; i--)
#define REP(i,n) for(ll i = 1; i < n; i++)
#define PER(i,n) for(ll i = n; i >= 1; i--)
#define sz(x) ll(x.size())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define YesorNo(a) printf(a ? "Yes\n" : "No\n")
#define endl '\n'
#define fi first
#define se second
using ll = long long;
using P = pair<ll,ll>;
using Pl = pair<ll,ll>;
using vi = vector<ll>;
using vii = vector<vi>;
using vl = vector<ll>;
using vll = vector<vl>;
using vs = vector<string>;
using vb = vector<bool>;
using vc = vector<char>;
using vcc = vector<vc>;
using vP = vector<P>;
using vPP = vector<vP>;
using vPl = vector<Pl>;
const ll dx[] = {0,1,0,-1,1,1,-1,-1};
const ll dy[] = {1,0,-1,0,1,-1,-1,1};
const ll inf = (1<<30)-1;
const ll infll = (1LL<<62)-1;
ll ceil(const ll &a, const ll &b){return ((a)+(b)-1)/b;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }



int main(){
  ll d;
  cin >> d;
  ll k = 26;
  vi c(k);
  rep(i,k) cin >> c[i];
  vii s(d,vi(k));
  rep(i,d)rep(j,k) cin >> s[i][j];
  vi t(d);
  rep(i,d) cin >> t[i];
  vi p(k);
  vi lastday(k);
  rep(i,d) {
    ll today = t[i]-1;
    p[today] += s[i][today];
    lastday[today] = i+1;
    rep(j,k) {
      p[j] -= c[j] * (i+1 - lastday[j]);
    }
    ll ans = 0;
    rep(j,k) ans += p[j];
    cout << ans << endl;
  }
}