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
		int n,p,cnt=0,ans=0;
		cin>>n>>p;
		int res[50]={};
		if(n==0)break;
		cnt=p;
		bool ok=false;
		int x=-1;
		while(1){
			x++;
			x=x%n;
			if(cnt!=0){
				cnt--;
				res[x]++;
			}else{
				cnt=res[x];
				res[x]=0;
				if(cnt==p){
					ans=x;
					break;
				}
			}
		}
		print(ans);
	}
	return 0;
}
