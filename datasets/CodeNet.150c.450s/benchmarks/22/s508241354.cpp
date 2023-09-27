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
class BEL{
	public:
	struct edge{
		Def to,cost;
	};
	vector<vector<edge> >G;
	Def n;
	vector<Def>d;//distance
	BEL(Def size){
		n=size;
		G=vector<vector<edge> >(n);
	}
	void add_edge(Def a,Def b,Def c){
		edge e={b,c},ee={a,c};
		G[a].pb(e);
//		G[b].pb(ee);
	}
	int bel(Def s){// return 1 -> negative cycle
		d=vector<Def>(n,inf);
		d[s]=0;
		rep(i,n+1){
			rep(j,n)rep(k,G[j].size()){
				edge e=G[j][k];
				if(d[j]!=inf&&d[e.to]>d[j]+e.cost){
					if(i==n)return 1;
					d[e.to]=d[j]+e.cost;
				}
			}
		}
		return 0;
	}
};
int main(){
	int n,m,r;
	cin>>n>>m>>r;
	BEL bel(n);
	rep(i,m){
		int a,b,c;
		cin>>a>>b>>c;
		bel.add_edge(a,b,c);
	}
	int a=bel.bel(r);
	if(a)cout<<"NEGATIVE CYCLE"<<endl;
	else rep(i,n)if(bel.d[i]>inf/2)cout<<"INF"<<endl;
	else cout<<bel.d[i]<<endl;
}