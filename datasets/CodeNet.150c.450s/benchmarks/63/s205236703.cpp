#include<cstdio>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

typedef long long int ll;
typedef pair<ll,int> P;

const ll inf = 100000000000;

struct edge{int to; ll cost;};
vector<edge> G[100000];

int main(){
	int n,m,r;
	scanf("%d%d%d",&n,&m,&r);
	for(int i=0;i<m;i++){
		int s,t;
		ll d;
		edge e;
		scanf("%d%d%lld",&s,&t,&d);
		e.to = t; e.cost = d;
		G[s].push_back(e);
	}
	priority_queue<P,vector<P>,greater<P> > pq;
	ll dist[100000];
	fill(dist,dist+n,inf);
	dist[r] = 0;
	pq.push(make_pair(0,r));
	while(!pq.empty()){
		P now = pq.top(); pq.pop();
		if(dist[now.second]<now.first) continue;
		for(int i=0;i<G[now.second].size();i++){
			if(dist[G[now.second][i].to]>dist[now.second]+G[now.second][i].cost){
				dist[G[now.second][i].to] = dist[now.second] + G[now.second][i].cost;
				pq.push(make_pair(dist[G[now.second][i].to],G[now.second][i].to));
			}
		}
	}
	for(int i=0;i<n;i++){
		if(dist[i]==inf) printf("INF\n");
		else printf("%lld\n",dist[i]);
	}
}

