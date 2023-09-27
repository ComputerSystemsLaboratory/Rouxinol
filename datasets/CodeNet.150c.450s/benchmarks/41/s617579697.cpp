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
#include<cstdio>
#include<sstream>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef pair<int,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-8;
const ll inf=1e18;
int main(){
	int n,m;
	cin>>n>>m;
	vvi cost(n,vi(n,inf));
	rep(i,n)cost[i][i]=0;
	while(m--){
		int a,b,c;
		cin>>a>>b>>c;
		cost[a][b]=c;
	}
	rep(k,n)rep(i,n)rep(j,n)
		cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
	bool h=true;
	rep(i,n)if(cost[i][i]!=0)h=false;
	if(!h)cout<<"NEGATIVE CYCLE"<<endl;
	else{
		rep(i,n){
			rep(j,n){
				if(j)cout<<" ";
				if(cost[i][j]<1e13)cout<<cost[i][j];
				else cout<<"INF";
			}
			cout<<endl;
		}
	}
}