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
//#define mt make_tuple
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
//typedef tuple<int,int,int> tp;
//typedef vector<tp> vt;
typedef vector<vd> vvd;
typedef pair<Def,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-7;
const int inf=1e9;
const ll INF=2e18;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
int main(){
	int n;
	while(cin>>n,n){
		vi dp(86400);
		int a,b,c,s,t;
		char q;
		rep(i,n){
			cin>>a>>q>>b>>q>>c;
			s=a*3600+b*60+c;
			cin>>a>>q>>b>>q>>c;
			t=a*3600+b*60+c;
			dp[s]++;
			dp[t]--;
		}
		rep(i,86400-1)dp[i+1]+=dp[i];
		int out=0;
		rep(i,86400)out=max(out,dp[i]);
		cout<<out<<endl;
	}
}