#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define repr(i, n) REPR(i, n, 0)
#define REPR(i, s, e) for(int i=(int)(s-1); i>=(int)(e); i--)
#define pb push_back
#define all(r) r.begin(),r.end()
#define rall(r) r.rbegin(),r.rend()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const double EPS = 1e-8;

template<typename T> T chmax(T& a, const T& b){return a = (a > b ? a : b);}
template<typename T> T chmin(T& a, const T& b){return a = (a < b ? a : b);}

using Facts = map<ll, int>; 
void factrize(ll n, Facts& mp) {
  if(n < 2) return;
  ll m = sqrt(n);
  REP(i, 2, m+1) {
    int cnt = 0;
    while(n%i == 0) {
      n /= i;
      ++cnt;
    }
    if(cnt != 0) mp[i] += cnt;
  }
  if(n != 1) mp[n]++;
}


int main(){
    int n;
    cin >> n;
    Facts f;
    factrize(n, f);
    cout << n << ":";
    for(auto&& p: f) {
        rep(j, p.se) cout << " " << p.fi;
    }
    cout << endl;
    return 0;
}
