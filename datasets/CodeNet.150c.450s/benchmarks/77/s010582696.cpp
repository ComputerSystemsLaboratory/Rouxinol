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
		int n,m,x[22],y[22],dist[33];
		char dir[33];
		bool f[22]={};
		bool ok=false;
		cin>>n;
		if(n==0)break;
		rep(i,0,n)cin>>x[i]>>y[i];
		cin>>m;
		rep(i,0,m)cin>>dir[i]>>dist[i];
		int nx=10,ny=10,px,py;
		rep(i,0,m){
			px=nx,py=ny;
			if(dir[i]=='N'){
				ny+=dist[i];
				rep(j,0,n)if(nx==x[j]&&py<=y[j]&&ny>=y[j])f[j]=true;
			}
			if(dir[i]=='S'){
				ny-=dist[i];
				rep(j,0,n)if(nx==x[j]&&ny<=y[j]&&py>=y[j])f[j]=true;
			}
			if(dir[i]=='E'){
				nx+=dist[i];
				rep(j,0,n)if(ny==y[j]&&px<=x[j]&&nx>=x[j])f[j]=true;
			}
			if(dir[i]=='W'){
				nx-=dist[i];
				rep(j,0,n)if(ny==y[j]&&nx<=x[j]&&px>=x[j])f[j]=true;
			}
		}
		rep(j,0,n){
			if(!f[j])break;
			if(j==n-1)ok=true;
		}
		if(ok?print("Yes"):print("No"));
	}
	return 0;
}
