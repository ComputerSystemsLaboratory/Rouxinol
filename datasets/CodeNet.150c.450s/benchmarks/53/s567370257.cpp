#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF (1e9+1)
//#define INF (1LL<<59)

vector<ll> prime_factorization(ll n){
	vector<ll> ret;
	
	for(ll div=2;div<=1+sqrt(n);div++){
		while(n%div==0){
			ret.pb(div);
			n/=div;
		}
	}
	if(n!=1)ret.pb(n);
	return ret;
}

int main(){
	int n;
	cin>>n;
	cout<<n<<":";
	vector<ll> res = prime_factorization(n);
	
	rep(i,res.size())cout<<" "<<res[i];
	cout<<endl;
}