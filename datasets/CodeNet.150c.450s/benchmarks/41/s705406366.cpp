#include <iostream>
#include <vector>
#define INF 50000000000000
std::vector<int> G[100000];
struct edge{int from,to,cost;};
int V,E,r=0;
bool negativeflag=false;
edge es[500000];
long long int d[100000];
void shortest_path(int s);
bool negative_path(int s);
int main(void){
	std::cin>>V>>E;
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
	if(negativeflag){
		std::cout<<"NEGATIVE CYCLE"<<std::endl;

	}else {
		for(r=0;r<V;r++){
			shortest_path(r);
			for(int i=0;i<V;i++){
				if(d[i]!=INF){
					std::cout<<d[i];
				}else {
					std::cout<<"INF";
				}
				if(i!=V-1){
					std::cout<<' ';
				}else {
					std::cout<<std::endl;
				}
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
		d[i]=0;
	}
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
}