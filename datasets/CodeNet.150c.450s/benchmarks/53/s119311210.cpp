#include "bits/stdc++.h"
#include "math.h"
#include "string.h"
#include "algorithm"
 
using namespace std;
typedef int64_t ll;
typedef vector<int64_t> vll;
typedef vector<vll> vvll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<int> vin;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define SIZE(a) int((a).size())


vector<pair<ll,int>> factorize(ll n) {
    vector<pair<ll,int>> res;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i != 0) continue;
        res.emplace_back(i,0);
        while (n % i == 0) {
            n /= i;
            res.back().second++;
        } 
    }
    if (n != 1) res.emplace_back(n,1);
    return res;
}

int main (){
  ll n;cin>>n;
  vector<pair<ll,int>> v=factorize(n);
  cout<<n<<':';
  REP(i,v.size()){
    REP(j,v[i].second){
      cout<<' '<<v[i].first;
    }
    
  }
  cout<<endl;
}
