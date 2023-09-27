#include<iostream>
#include<vector>
#include<string>
#include<algorithm>	
#include<map>
#include<set>
#include<utility>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
#include<sstream>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
using namespace std;
//kaewasuretyuui
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vp;
typedef vector<vp> vvp;
typedef pair<int,pii> pip;
typedef vector<pip>vip;
const double PI=acos(-1);
const double EPS=1e-8;
const int inf=1e8;
class DIJ{
	public:
	struct edge{
		int to,cost;
	};
	vector<vector<edge> >G;
	int n;
	vi d;//distance
	DIJ(int size){
		n=size;
		G=vector<vector<edge> >(n);
	}
	void add_edge(int a,int b,int c){
		edge e={b,c},ee={a,c};
		G[a].pb(e);
//		G[b].pb(ee);
	}
	void dij(int s){
		d=vi(n,inf);
		d[s]=0;
		priority_queue<pii>q;
		q.push(pii(0,s));
		while(!q.empty()){
			pii p=q.top();
			q.pop();
			int pos=p.second,cost=-p.first;
			if(cost>d[pos])continue;
			rep(i,G[pos].size()){
				edge e=G[pos][i];
				int to=e.to;
				int nowcost=cost+e.cost;
				if(nowcost<d[to]){
					d[to]=nowcost;
					q.push(pii(-d[to],to));
				}
			}
		}
	}
};
struct UnionFind{
    vector<int> data;
    UnionFind(int size) : data(size, -1) {}
    bool unionSet(int x,int y){
        x=root(x);y=root(y);
        if(x==y)return 0;
        if(data[y]<data[x])swap(x,y);
        data[x]+=data[y],data[y]=x;
        return 1;
    }
    bool findSet(int x,int y){
        return root(x)==root(y);
    }
    int root(int x){
        return data[x]<0 ? x : data[x]=root(data[x]);
    }
    int size(int x){
        return -data[root(x)];
    }
};
class KRK{
	public:
	struct edge{
		int from,to,cost;
	};
	vector<edge>G;
	int n;
	KRK(int size){
		n=size;
	}
	void add_edge(int a,int b,int c){
		edge e={a,b,c};
		G.pb(e);
	}
	void krk(){
		int sum=0;
		sort(all(G),[](edge a,edge b){
			return a.cost<b.cost;
		});
		UnionFind uf(n);
		rep(i,G.size()){
			edge e=G[i];
			if(!uf.findSet(e.from,e.to)){
				sum+=e.cost;
				uf.unionSet(e.from,e.to);
			}
		}
		cout<<sum<<endl;
	}
};
int main(){
	int n,m;
	cin>>n>>m;
	KRK krk(n);
	while(m--){
		int a,b,c;
		cin>>a>>b>>c;
		krk.add_edge(a,b,c);
	}
	krk.krk();
}	