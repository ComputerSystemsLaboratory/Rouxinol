#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<stack>
#include<cstdio>
#include<sstream>
#include<iomanip>
#include<assert.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef int Def;
typedef pair<Def,Def> pii;
typedef vector<Def> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef pair<Def,pii> pip;
typedef vector<pip>vip;
//#define mt make_tuple
//typedef tuple<double,int,double> tp;
//typedef vector<tp> vt;
const double PI=acos(-1);
const double EPS=1e-7;
const int inf=1e9;
const ll INF=2e18;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int dp[110][10010]={0};
int main(){
	int n,W;
	cin>>n>>W;
	vector<int>v(n),w(n);
	rep(i,n)cin>>v[i]>>w[i];
//	vector<vector<int> >dp(n+1,vector<int>(w+1));
	rep(i,110)rep(j,10010)dp[i][j]=-1;
	dp[0][0]=0;
	rep(i,n){
		rep(j,W+1)if(dp[i][j]>=0){
			dp[i+1][j]=max(dp[i+1][j],dp[i][j]);
			if(j+w[i]<=W)dp[i+1][j+w[i]]=max(dp[i+1][j+w[i]],dp[i][j]+v[i]);
		}
	}
	int out=0;
	rep(i,W+1)out=max(out,dp[n][i]);
	cout<<out<<endl;
}