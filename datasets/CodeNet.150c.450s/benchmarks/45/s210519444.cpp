#include "bits/stdc++.h"
#include "math.h"
 
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<int> vin;
typedef pair<ll,ll> P;
typedef vector<P> vp;
#define rep(i,a,b) for(ll i=(a);i<(b);++i)
#define SIZE(a) int((a).size())
#define out(a) cout<<(a)<<endl;
const int INF=INT_MAX;
const int MAX = 510000;
const ll MOD = 1000000007;
ll modpow(ll x, ll n){
	ll r=1;
	while(n){
		if(n&1) r=r*x%MOD;
		x=x*x%MOD;
		n>>=1;
	}
	return r;
}
int main(){
  ll m,n;cin>>m>>n;
  cout<<modpow(m,n)<<endl;
}

