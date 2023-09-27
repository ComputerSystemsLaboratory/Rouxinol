#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
using namespace std;
typedef long long ll;
const ll INF=0x3f3f3f3f3f3f3f3f;

ll d[100005];
int n,m,r;
vector<pair<ll,int>>G[100005];
priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>>pq;

int main() {
	cin>>n>>m>>r;
	for (int i=0;i<n;i++) d[i]=INF;
	for (int i=0;i<m;i++) {
		int s,t; ll w; cin>>s>>t>>w;
		G[s].pb({w,t});
	}
	d[r]=0;
	pq.push({0,r});
	while (pq.size()) {
		ll dis=pq.top().ff;
		int v=pq.top().ss;
		pq.pop();
		if (d[v]<dis) continue;
		for (auto p:G[v]) {
			if (dis+p.ff<d[p.ss]) {
				d[p.ss]=dis+p.ff;
				pq.push({d[p.ss],p.ss});
			}
		}
	}
	for (int i=0;i<n;i++) {
		if (d[i]==INF) cout<<"INF";
		else cout<<d[i];
		cout<<'\n';
	}
}
