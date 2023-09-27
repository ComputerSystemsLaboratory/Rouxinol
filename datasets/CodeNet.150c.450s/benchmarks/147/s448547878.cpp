#include <bits/stdc++.h>
#define ft first
#define sc second
#define pt(sth) cout << sth << "\n"
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
template<class T>bool chmax(T &a, const T &b) {if(a<b) {a=b; return 1;} return 0;}
template<class T>bool chmin(T &a, const T &b) {if(b<a) {a=b; return 1;} return 0;}
static const ll INF=1e18;
static const ll MAX=101010;
static const ll MOD=998244353;

//for(i=0; i<N; i++) cin >> a[i];


ll f(ll a, ll b, ll c) {
  return a*a+b*b+c*c+a*b+b*c+c*a;
}

int main(void) {
  ll i, j, k;
  
  ll N;
  cin >> N;
  
  map<ll, ll> mp;
  for(ll x=1; x<=100; x++) {
    for(ll y=1; y<=100; y++) {
      for(ll z=1; z<=100; z++) {
        mp[f(x, y, z)]++;
      }
    }
  }
  
  for(i=1; i<=N; i++) pt(mp[i]);
  
}
 
 


