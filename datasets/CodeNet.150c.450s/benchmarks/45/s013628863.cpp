#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF (1e9+1)
//#define INF (1LL<<59)

ll power(ll a,ll b,ll mod){
	ll ret=1;
	if(b>0){
		ret = power(a,b/2,mod);
		if(b%2==0)ret = (ret*ret)%mod;
		else ret = (((ret*ret)%mod)*a)%mod;
	}
	return ret;
}

int main(){
	int n,m;
	cin>>m>>n;
	cout<<power(m,n,1e9+7)<<endl;
}