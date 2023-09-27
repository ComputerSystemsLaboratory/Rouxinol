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
//struct edge{int to,cost;};
struct edge{int from,to,cost;};
typedef pair<int,int> P;
int n,m,r,d[1010];
edge es[2010];
bool NEGATIVE_CYCLE;
void bell(int s){
	fill(d,d+n,INF);
	d[s]=0;
	for(int i=0;i<=n;i++){
		bool update=false;
		for(edge e:es){
			if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
				d[e.to]=d[e.from]+e.cost;
				update=true;
			}
		}
		if(i==n&&update)NEGATIVE_CYCLE=1;
	}
}
signed main(){
	cin>>n>>m>>r;
	rep(i,m){
		int a,b,c;
		cin>>a>>b>>c;
		es[i]={a,b,c};
	}
	bell(r);
	if(NEGATIVE_CYCLE)puts("NEGATIVE CYCLE");
	else{
		rep(i,n){
			if(d[i]==INF)puts("INF");
			else cout<<d[i]<<endl;
		}
	}
	return 0;
}

