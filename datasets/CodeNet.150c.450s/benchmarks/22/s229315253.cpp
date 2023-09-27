#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
#define INF (1e9+1)
//#define INF (1LL<<59)





#define MAX_V 1000

struct edge{int to,cost;};
vector<edge> G[MAX_V];

int shortest_path(int s,vector<int> &d){
	int v = d.size();
	rep(i,d.size())d[i]=INF;
	d[s]=0;
	rep(loop,v){
		bool update = false;
		rep(i,MAX_V){
			for(auto e:G[i]){
				if(d[i]!=INF && d[e.to] > d[i]+e.cost){
					d[e.to] = d[i]+e.cost;
					update = true;
				}
			}
		}
		if(!update)break;
		if(loop==v-1)return true;	//negative_cycle
	}
	return false;
}


int main(){
	int v,e,r;
	cin>>v>>e>>r;
	
	rep(i,e){
		int u,v,d;
		cin>>u>>v>>d;
		G[u].pb({v,d});
	}
	
	vector<int> d(v);
	bool res = shortest_path(r,d);
	if(res==true)cout<<"NEGATIVE CYCLE"<<endl;
	else{
		rep(i,v){
			if(d[i]==INF)cout<<"INF"<<endl;
			else cout<<d[i]<<endl;
		}
	}
}