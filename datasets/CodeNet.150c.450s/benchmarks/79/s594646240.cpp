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
		int n,r,p,c;
		cin>>n>>r;
		if(n==0)break;
		int ans=0;
		vl s(110),t(110);
		rep(i,1,n+1)s[i]=n-i+1;
		rep(i,0,r){
			cin>>p>>c;
			t=s;
			rep(j,1,p+c+1){
				if(j<=c)s[j]=t[p+j-1];
				else if(j>c&&j<p+c)s[j]=t[j-c];
			}
		}
		print(s[1]);
	}
	return 0;
}
