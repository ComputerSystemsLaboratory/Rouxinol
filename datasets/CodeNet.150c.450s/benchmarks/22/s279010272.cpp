#include <bits/stdc++.h>
#define pb push_back
using namespace std;
const int INF=0x3f3f3f3f;
const int maxn=1005;

struct edge{int to,cost;};

int n,m,s,cnt;
int d[maxn];
int qh,qt,q[maxn*maxn];
bool ok=1,inq[maxn];
vector<edge>G[maxn];

int main() {
	cin>>n>>m>>s;
	for (int i=0;i<m;i++) {
		int u,v,w; cin>>u>>v>>w;
		G[u].pb(edge{v,w});
	}
	memset(d,0x3f,sizeof(d));
	d[s]=0;
	q[qt++]=s; inq[s]=1;
	while (qh<qt) {
		int u=q[qh++]; inq[u]=0;
		for (edge e:G[u]) {
			if (d[e.to]>d[u]+e.cost) {
				d[e.to]=d[u]+e.cost;
				if (!inq[e.to]) {
					q[qt++]=e.to;
					inq[e.to]=1;
					++cnt;
				}
			}
		}
		if (cnt>n*n+5) {ok=0;break;}
	}
	if (!ok) {
		cout<<"NEGATIVE CYCLE"<<'\n';
		return 0;
	}
	else for (int i=0;i<n;i++) 
		if (d[i]==INF) cout<<"INF"<<'\n';
		else cout<<d[i]<<'\n';
}