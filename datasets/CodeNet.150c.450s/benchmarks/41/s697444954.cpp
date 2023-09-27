#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,n) for(int i=0;i<n;i++)
#define INF 100000000000000
struct edge{int from,to,cost;};
int n,m,d[110];
edge es[9910];
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
	cin>>n>>m;
	rep(i,m){
		int a,b,c;
		cin>>a>>b>>c;
		es[i]={a,b,c};
	}
	rep(i,n){
		bell(i);
		if(NEGATIVE_CYCLE){
			puts("NEGATIVE CYCLE");
			return 0;
		}
	}
	rep(i,n){
		bell(i);
		rep(j,n){
			if(d[j]==INF)cout<<"INF";
			else cout<<d[j];
			if(j!=n-1)cout<<" ";
			else cout<<endl;
		}
	}
	return 0;
}

