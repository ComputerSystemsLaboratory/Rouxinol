#include <iostream>
#include <vector>
#define INF 50000000000000
std::vector<int> G[100000];
struct edge{int from,to,cost;};
int V,E,r;
bool negativeflag=false;
bool possiblity[100000];
edge es[500000];
long long int d[100000];
void shortest_path(int s);
bool negative_path(int s);
bool reachable(int v);
int main(void){
	std::cin>>V>>E>>r;
	for(int i=0;i<E;i++){
		int from,to,cost;
		std::cin>>from>>to>>cost;
		G[from].push_back(to);
		//G[t].push_back(s);
		es[i].from=from;
		es[i].to=to;
		es[i].cost=cost;
	}
	negativeflag=negative_path(r);
	if(!negativeflag){
		shortest_path(r);
	}
	if(negativeflag){
		std::cout<<"NEGATIVE CYCLE"<<std::endl;
	}else {
		for(int i=0;i<V;i++){
			if(d[i]!=INF){
				std::cout<<d[i]<<std::endl;
			}else {
				std::cout<<"INF"<<std::endl;
			}
		}
	}
	return 0;
}
void shortest_path(int s){
	for(int i=0;i<V;i++){
		d[i]=INF;
	}
	d[r]=0;
	while(1){
	//for(int j=0;j<V;j++){
		bool flag=true;
		for(int i=0;i<E;i++){
			if(d[es[i].from]!=INF){
				if(d[es[i].to]>d[es[i].from]+es[i].cost){
					d[es[i].to]=d[es[i].from]+es[i].cost;
					flag=false;
				}
			}
		}
		if(flag){
			break;
		}
	}
}
bool negative_path(int s){
	bool flag=false;
	for(int i=0;i<V;i++){
		d[i]=INF;
		possiblity[i]=false;
	}
	d[r]=0;
	for(int j=0;j<V;j++){
		for(int i=0;i<E;i++){
			if(d[es[i].from]!=INF){
				if(d[es[i].to]>d[es[i].from]+es[i].cost){
					d[es[i].to]=d[es[i].from]+es[i].cost;
					if(j==V-1){
						flag=true;
					}
				}
			}
		}
	}
	return flag;
	/*for(int i=0;i<V;i++){
		std::cout<<d[i]<<std::endl;
	}
	if(flag==false){
		return false;
	}else {
		flag=reachable(r);
		return flag;	
	}*/
}
bool reachable(int v){
	possiblity[v]=true;
	if(d[v]<0){
		return true;
	}else {
		for(int i=0;i<G[v].size();i++){
			if(possiblity[G[v][i]]==false){
				return reachable(G[v][i]);
			}
		}
	}
	return false;
}