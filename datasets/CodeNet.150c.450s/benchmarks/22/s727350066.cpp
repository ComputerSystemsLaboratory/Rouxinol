#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define each(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl
#define maxch(x,y) x=max(x,y)
#define minch(x,y) x=min(x,y)
#define uni(x) x.erase(unique(all(x)),x.end())
#define exist(x,y) (find(all(x),y)!=x.end())
#define bcnt(x) bitset<32>(x).count()

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;
typedef pair<ll, ll> PL;
typedef pair<P, ll> PPL;

#define INF INT_MAX/3

#define MAX_V 1010
#define MAX_E 2222

//// shortest path
struct edge{int from,to,cost;};
//// Bellman-Ford
struct BellmanFord{
	edge es[MAX_E];
	int d[MAX_V];
	int V,E;

	void init(int v,int e,edge *ess){
		V=v; E=e;
		for(int i=0;i<E;i++)es[i]=ess[i];
	}
	bool find_negative_loop(){
		memset(d,0,sizeof(d));
		for(int i=0;i<V;i++){
			for(int j=0;j<E;j++){
				edge e=es[j];
				if(d[e.to]>d[e.from]+e.cost){
					d[e.to]=d[e.from]+e.cost;
					if(i==V-1)return true;
				}
			}
		}
		return false;
	}
	bool shortpath(int s){
		for(int i=0;i<V;i++)d[i]=INF;
		d[s]=0;
		int cnt=0;
		while(true){
			bool update=false;
			for(int i=0;i<E;i++){
				edge e=es[i];
				if(d[e.from]!=INF&&d[e.to]>d[e.from]+e.cost){
					d[e.to]=d[e.from]+e.cost;
					update=true;
				}
				if(cnt==V-1)return false;
			}
			cnt++;
			if(!update)break;
		}
		return true;
	}
};

BellmanFord bf;
edge es[2222];
int V,E,s;

int main(){
	cin.sync_with_stdio(false);
	cin>>V>>E>>s;
	rep(i,E)cin>>es[i].from>>es[i].to>>es[i].cost;
	bf.init(V,E,es);
	/*if(bf.find_negative_loop()){
		cout<<"NEGATIVE CYCLE"<<endl;
		return 0;
	}*/
	if(!bf.shortpath(s)){
		cout<<"NEGATIVE CYCLE"<<endl;
		return 0;
	}
	rep(i,V){
		if(bf.d[i]==INF)cout<<"INF"<<endl;
		else cout<<bf.d[i]<<endl;
	}
	return 0;
}