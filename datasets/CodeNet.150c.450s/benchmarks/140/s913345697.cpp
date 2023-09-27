#include <iostream>
#include <vector>
#include <queue>
#define INF 50000000000
struct vertex{
	std::vector<int> edge_to;
	std::vector<int> edge_cost;
	bool done;
	long long int mincost;
};
std::vector<vertex> G(100000);
typedef std::pair<int,int> P;
void shortest_path(int v);
int prim(int x);
int V,E;
int r;
int main(void){
	std::cin>>V>>E;
	for(int i=0;i<E;i++){
		int from,to,cost;
		std::cin>>from>>to>>cost;
		G[from].edge_to.push_back(to);
		G[from].edge_cost.push_back(cost);
		G[to].edge_to.push_back(from);
		G[to].edge_cost.push_back(cost);		
	}
	std::cout<<prim(0)<<std::endl;
	//shortest_path(r);
/*	for(int i=0;i<V;i++){
		if(G[i].mincost!=INF){
			std::cout<<G[i].mincost<<std::endl;
		}else {
			std::cout<<"INF"<<std::endl;
		}	
	}*/
	return 0;
}
void shortest_path(int v){
	for(int i=0;i<V;i++){
		G[i].mincost=INF;
	}
	G[v].mincost=0;
	std::priority_queue<P,std::vector<P>, std::greater<P> > que;
	que.push(P(0,v));//first:cost,second vertex
	while(!que.empty()){
		P p=que.top();que.pop();
		int from=p.second;
		if(G[from].mincost<p.first){
			continue;
		}
		for(int i=0;i<G[from].edge_to.size();i++){
			int to=G[from].edge_to[i];
			int cost_to=G[from].edge_cost[i];
			if(G[to].mincost>G[from].mincost+cost_to){
				G[to].mincost=G[from].mincost+cost_to;
				que.push(P(G[to].mincost,to));
			}
		}
	}
}
int prim(int x){
	for(int i=0;i<V;i++){
		G[i].mincost=INF;
		G[i].done=false;
	}
	G[x].mincost=0;
	int res=0;
	while(1){
		int v=-1;
		for(int u=0;u<V;u++){
			if(!G[u].done && (v==-1 || G[u].mincost<G[v].mincost)){
				v=u;
			}
		}
		if(v==-1){
			break;
		}
		G[v].done=true;
		res+=G[v].mincost;
//		std::cout<<v<<" "<<res<<std::endl;
		/*for(int u=0;u<V;u++){
			int mem=-1;
			for(int i=0;i<G[v].edge_to.size();i++{
				if(G[v].edge_to[i]==u){
					mem=i;
				}
			}
			if(mem!=-1){
				mincost[u]=std::min(G[u].mincost,G[v].edge_cost[mem]);
			}
		}*/
		for(int i=0;i<G[v].edge_to.size();i++){
			int to=G[v].edge_to[i];
			int to_cost=G[v].edge_cost[i];
			if(G[to].mincost>to_cost){
				G[to].mincost=to_cost;
			}
		}
	}
	return res;
}