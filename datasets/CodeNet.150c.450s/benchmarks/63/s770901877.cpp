#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <queue>
#include <algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;
const int inf=1<<30;
const double pi=acos(-1);

class Dijkstra{
	private:
		struct edge{
			int to,cost;
		};
		int V;
		vector<vector<edge> > G;
	public:
		vector<int> d;
		Dijkstra(int x){
			V=x;
			G=vector<vector<edge> >(x);
		}
		void add_edge(int x,int y,int z){
			edge tmp={y,z};
			G[x].push_back(tmp);
		}
		void dijkstra(int s){
			priority_queue<P> que;
			d=vector<int>(V,inf);
			d[s]=0;
			que.push(P(0,s));
			while(!que.empty()){
				P p=que.top();
				que.pop();
				int v=p.second;
				if(d[v]<-1*p.first) continue;
				for(int i=0;i<G[v].size();i++){
					edge e=G[v][i];
					if(d[e.to]>d[v]+e.cost){
						d[e.to]=d[v]+e.cost;
						que.push(P(-1*d[e.to],e.to));
					}
				}
			}
		}
};

int v,e,r;

int main(){ 
	cin>>v>>e>>r;
	Dijkstra dij(v);
	for(int i=0;i<e;i++){
		int a,b,c;
		cin>>a>>b>>c;
		dij.add_edge(a,b,c);
	}
	dij.dijkstra(r);
	for(int i=0;i<v;i++){
		if(dij.d[i]==inf) cout<<"INF"<<endl;
		else cout<<dij.d[i]<<endl;
	}
}