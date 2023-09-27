#include "bits/stdc++.h"
using namespace std;
typedef long long lint;
//d,edge,g,P,q
#define MAX_N 100010
lint d[MAX_N];
struct edge{
	int to;
	lint cost;
};
vector<edge> g[MAX_N];
typedef pair<lint,int> P;
priority_queue<P,vector<P>,greater<P> > q;
void pfs(int s){
	d[s]=0;q.push({0,s});
	lint cd,v;
	while(q.size()){
		cd=q.top().first;v=q.top().second;q.pop();
		if(cd>d[v])continue;
		for(edge &e:g[v])if(d[e.to]>cd+e.cost){
			d[e.to]=cd+e.cost;
			q.push({d[e.to],e.to});
		}
	}
}

int main(){
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);

	lint v,e,r;cin>>v>>e>>r;
	int a,b,c;
	for(int i=0;i<v;++i)d[i]=INT_MAX;
	for(int i=0;i<e;++i){
		cin>>a>>b>>c;
		g[a].push_back({b,c});
		//g[b].push_back({a,c});
	}pfs(r);
	for(int i=0;i<v;++i){
		if(d[i]==INT_MAX)cout<<"INF"<<endl;
		else cout<<d[i]<<endl;
	}getchar();getchar();
	return 0;
}
