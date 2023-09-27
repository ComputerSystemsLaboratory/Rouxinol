#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
typedef long long ll;

ll ans;
int n,m,p[10005];
vector<pair<ll,pair<int,int>>>E;

int find(int x) {
	return (p[x]==x?x:find(p[x]));
}

int main() {
	cin>>n>>m;
	for (int i=0;i<n;i++) p[i]=i;
	for (int i=0;i<m;i++) {
		int u,v,w; cin>>u>>v>>w;
		E.push_back({w,{u,v}});
	}
	sort(E.begin(),E.end());
	for (auto i:E) {
		int x=find(i.ss.ff) , y=find(i.ss.ss);
		if (x!=y) {
			ans+=i.ff;
			p[y]=x;
		}
	}
	cout<<ans<<'\n';
}
