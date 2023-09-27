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
//typedef tuple<int,string> tp;
//typedef vector<tp> vt;
const double PI=acos(-1);
const double EPS=1e-7;
const int inf=1e9;
const ll INF=2e18;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int main(){
	vi dp(1000010,inf);
	vi dp2(1000010,inf);
	dp[0]=dp2[0]=0;
	loop(i,1,2000){
		int a=i*(i+1)*(i+2)/6;
		if(a>=1000010)break;
		rep(j,1000010)if(j+a<1000010)dp[j+a]=min(dp[j+a],dp[j]+1);else break;
		if(a%2)rep(j,1000010)if(j+a<1000010)dp2[j+a]=min(dp2[j+a],dp2[j]+1);else break;
	}
	int n;
	while(cin>>n,n)cout<<dp[n]<<" "<<dp2[n]<<endl;
}