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
	int n,m;
	while(cin>>n>>m,n){
		vvi dp(n+1,vi(m+1));
		int co;
		cin>>co;
		rep(i,co){
			int a,b;
			cin>>a>>b;
			dp[a][b]=-1;
		}
		dp[1][0]=1;
		rep(i,n)rep(j,m)if(dp[i+1][j+1]!=-1){
			if(dp[i][j+1]!=-1)dp[i+1][j+1]+=dp[i][j+1];
			if(dp[i+1][j]!=-1)dp[i+1][j+1]+=dp[i+1][j];
		}
		if(dp[n][m]!=-1)cout<<dp[n][m]<<endl;
		else cout<<0<<endl;
	}
}