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
//static const ll MOD=1e9+7;
static const ll MOD=998244353;
//for(i=0; i<N; i++) cin >> a[i];


int main() {
  ll i, j, k;
  
  ll N;
  cin >> N;
  ll a[MAX];
  map<ll, ll> mp;
  ll s=0;
  for(i=0; i<N; i++) {
    cin >> a[i];
    s+=a[i];
    mp[a[i]]++;
  }
  
  ll Q;
  cin >> Q;
  for(i=0; i<Q; i++) {
    ll b, c;
    cin >> b >> c;
    
    s+=(c-b)*mp[b];
    mp[c]+=mp[b];
    mp[b]=0;
    pt(s);
  }
  
  
}


