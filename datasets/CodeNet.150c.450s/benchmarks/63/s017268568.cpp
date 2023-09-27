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
void shortest_path(int v);
int V,E;
int r;
int main(void){
	std::cin>>V>>E>>r;
	for(int i=0;i<E;i++){
		int from,to,cost;
		std::cin>>from>>to>>cost;
		G[from].edge_to.push_back(to);
		G[from].edge_cost.push_back(cost);
//		G[to].edge_to.push_back(from);
//		G[to].edge_cost.push_back(cost);		
	}
	shortest_path(r);
	for(int i=0;i<V;i++){
		if(G[i].mincost!=INF){
			std::cout<<G[i].mincost<<std::endl;
		}else {
			std::cout<<"INF"<<std::endl;
		}	
	}
	return 0;
}
void shortest_path(int v){
	for(int i=0;i<V;i++){
		G[i].mincost=INF;
	}
	G[v].mincost=0;
	while(1){
		bool update=false;
		for(int i=0;i<V;i++){
			for(int j=0;j<G[i].edge_to.size();j++){
				if(G[ G[i].edge_to[j] ].mincost>G[i].mincost+G[i].edge_cost[j]){
					G[ G[i].edge_to[j] ].mincost=G[i].mincost+G[i].edge_cost[j];
					update=true;
				}
			}
		}
		if(!update){
			break;
		}
	}

}