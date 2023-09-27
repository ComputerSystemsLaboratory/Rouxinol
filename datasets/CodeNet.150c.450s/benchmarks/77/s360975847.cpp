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
#define mt make_tuple
#define all(in) in.begin(),in.end()
#define shosu(x) fixed<<setprecision(x)
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef vector<string> vs;
typedef vector<double> vd;
//typedef tuple<ll,ll,ll,ll> tp;
//typedef vector<tp> vt;
typedef vector<vd> vvd;
typedef pair<int,pii> pip;
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
		vp in(n);
		rep(i,n)cin>>in[i].first>>in[i].second;
		int m;
		cin>>m;
		vvi fi(21,vi(21));
		int x=10,y=10;
		fi[x][y]=true;
		string s="NESW";
		while(m--){
			char c;
			int d;
			cin>>c>>d;
			rep(i,4)if(s[i]==c)while(d--){
				x+=dx[i];
				y+=dy[i];
				fi[x][y]=true;
			}
		}
		bool h=true;
		rep(i,n)if(fi[in[i].first][in[i].second]==0)h=false;
		if(h)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}