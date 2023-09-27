#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<char> vc;
typedef queue<ll> ql;
typedef deque<ll> dql;
typedef priority_queue<ll/*, vl, greater<ll>*/> pql; //降順(/*昇順*/)
typedef set<ll> sl;
typedef pair<ll, ll> pl;
typedef vector<vl> vvl;
typedef vector<pl> vpl;
#define rep(i, n) for(ll i = 0; i < ll(n); i++)
#define rep2(i, n) for(ll i = 1; i <= ll(n); i++)
//#define rep(i, k, n) for(ll i = k-1; i < ll(n); i++)
//#define rep2(i, k, n) for(ll i = k; i <= ll(n); i++)
#define all(v) (v).begin(), (v).end()
bool chmin(ll &a, ll b) {if(b < a) {a = b; return 1;} return 0;}
bool chmax(ll &a, ll b) {if(b > a) {a = b; return 1;} return 0;}
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;
//const ll MOD = 998244353;
const ll MAX = 1e9;
const char newl = '\n';

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  //input
  ll D;
  cin >> D;
  ll c[26+1];
  rep2(i, 26) cin >> c[i];
  ll s[D+1][26+1];
  rep2(i, D) rep2(j, 26) cin >> s[i][j];
  ll t[D+1];
  rep2(i, D) cin >> t[i];
  
  ll stfc=0; //satisfaction
  
  ll Nstr[26+1]; // not holding streak
  rep2(i, 26) Nstr[i]=0;
  
  rep2(d, D) {
    // calculate
    ll con=t[d]; //contest
    stfc += s[d][con];
    rep2(i, 26) {
      if(i==con) Nstr[i]=0;
      else {Nstr[i]++; stfc -= c[i]*Nstr[i];}
    }
    
    // output
    cout << stfc << newl;
  }
  
  return 0;
}