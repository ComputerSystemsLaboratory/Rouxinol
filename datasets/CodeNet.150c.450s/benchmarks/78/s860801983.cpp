#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<iomanip>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)	
#define show1d(v) rep(i,v.size())cout<<" "<<v[i];cout<<endl;
#define show2d(v) rep(i,v.size()){rep(j,v[i].size())cout<<" "<<v[i][j];cout<<endl;}cout<<endl;
using namespace std;
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<string> vs;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
Def inf = sizeof(Def) == sizeof(ll) ? 2e18 : 1e9+10;
int main(){
	vi w;
	loop(i,1,200)if(i*(i+1)*(i+2)/6<1000100)w.pb(i*(i+1)*(i+2)/6);
	const int n=1000100;
	vi dp(n+1,inf),dp2(n+1,inf);
	dp[0]=dp2[0]=0;
	rep(i,w.size())rep(j,n){
		int t=j+w[i];
		if(t<n+1)dp[t]=min(dp[t],dp[j]+1);
		if(t<n+1&&w[i]%2)dp2[t]=min(dp2[t],dp2[j]+1);
	}
	int m;
	while(cin>>m,m){
		cout<<dp[m]<<" "<<dp2[m]<<endl;
	}
}









