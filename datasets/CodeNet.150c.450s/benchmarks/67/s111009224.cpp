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
		int n,ans=0;
		cin>>n;
		if(n==0)break;
		rep(i,1,1000){
			rep(j,i+1,1001){
				if(n*2==(j-i+1)*(i+j))ans++;
			}
		}
		print(ans);
	}
	return 0;
}
