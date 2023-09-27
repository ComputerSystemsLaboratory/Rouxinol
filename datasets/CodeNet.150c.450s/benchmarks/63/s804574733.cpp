#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
#define INF 1000000000000000
#define fi first
#define se second
#define all(v) v.begin(),v.end()
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
#define pb push_back
struct edge{int to,cost;};
typedef pair<int,int> P;
int n,m,r,d[111111];
vector<edge>v[111111];
void dijkstra(int x){
	fill(d,d+n,INF);
	d[x]=0;
	priority_queue<P,vector<P>,greater<P>>q;
	q.push({x,0});
	while(!q.empty()){
		P p=q.top();
		q.pop();
		for(edge e:v[p.first]){
			if(d[e.to]>p.second+e.cost){
				d[e.to]=p.second+e.cost;
				q.push({e.to,d[e.to]});
			}
		}
	}
}
signed main(){
	cin>>n>>m>>r;
	rep(i,m){
		int a,b,c;
		cin>>a>>b>>c;
		v[a].pb({b,c});
	}
	dijkstra(r);
	rep(i,n){
		if(d[i]==INF)puts("INF");
		else cout<<d[i]<<endl;
	}
	return 0;
}

