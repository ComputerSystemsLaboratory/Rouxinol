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
const double PI=acos(-1);
const double EPS=1e-10;
const int inf=1e9;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> pii;
#define MAX_V 100010
struct edge{
	int to,cost;
};
vector<vector<edge> >G(MAX_V);
int V,E,s;
void dijkstra(){
	vi d(MAX_V);
	rep(i,MAX_V)d[i]=inf;
	d[s]=0;
	priority_queue<pii>q;
	q.push(pii(0,s));
	while(!q.empty()){
		pii p=q.top();
		q.pop();
		int pos=p.second,cost=-p.first;
		if(cost>d[pos])continue;
		rep(i,G[pos].size()){
			edge e=G[pos][i];
			int to=e.to;
			int nowcost=cost+e.cost;
			if(nowcost<d[to]){
				d[to]=nowcost;
				q.push(pii(-d[to],to));
			}
		}
	}
	rep(i,V)if(d[i]==inf)cout<<"INF"<<endl;
	else cout<<d[i]<<endl;
}
int main(){
	cin>>V>>E>>s;
	while(E--){
		int a,b,c;
		cin>>a>>b>>c;
		edge t={b,c};
		G[a].pb(t);
	}
	dijkstra();
}