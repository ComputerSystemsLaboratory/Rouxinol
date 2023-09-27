#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
typedef long long ll;
#define INF 2147483647

struct edge{
	int from,to,cost; 
};

edge es[2010];  //?????¨??? 

int d[1010];  // d[i] ??¨??????i???????????????????????? 

int V,E; //??????????????°??? 


//bool find_negative_loop(){
//	fill(d,d+V,0);
//	
//	for(int i = 0;i < V; i++){
//		for(int j = 0;j < E; j++){
//			edge e = es[j];
//			if(d[e.to] > d[e.from] + e.cost){
//				d[e.to] = d[e.from] + e.cost;
//				if(i == V-1) return false;
//			}
//		}
//	}
//	return true;
//}



bool shortest_path(int s){
	fill(d,d+V,INF);
	
	d[s] = 0;
	
	int v = 0;
	while(true){
		bool update = false;
		for(int i = 0;i < E; i++){
			edge e = es[i];
			if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
				d[e.to] = d[e.from] + e.cost;
				update = true;
				if(v == V-1) return true;
			}
		}
		if(!update) break;
		v++;
	}
	return false;
}


int main(){
	
	int r;
	cin >> V >> E >> r;

	for(int i = 0;i < E; i++) cin >> es[i].from >> es[i].to >>es[i].cost;
	
	if(!shortest_path(r)){
		for(int i = 0;i < V; i++){
			if(d[i] == INF) cout <<"INF" <<endl;
			else cout << d[i] << endl;
		}
	}else{
		cout <<"NEGATIVE CYCLE" <<endl;
	}
	

	return 0;
} 