#include "bits/stdc++.h"
using namespace std;
#define rep(i,a,n) for(ll i=a;i<n;i++)
#define ALL(s) s.begin(),s.end()
#define P pair<ll,ll>
#define vl vector<ll>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vvl vector<vector<ll>>
#define print(n) cout<<n<<endl
const int M=100010;
const int MOD=1000000007;
const int inf=1000000007;
const long long INF=1000000000000000007;
using ll=long long;


int main(){
	while(1){
		int n;
		cin>>n;
		if(n==0)break;
		int ans=0,s[110];
		rep(i,0,n)cin>>s[i];
		sort(s,s+n);
		rep(i,1,n-1)ans+=s[i];
		print(ans/(n-2));
	}
	return 0;
}
