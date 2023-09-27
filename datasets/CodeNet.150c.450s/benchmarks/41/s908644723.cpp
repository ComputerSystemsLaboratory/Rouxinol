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

edge es[10000];

int d[110][110]; // d[i][j]??¨??????i??°???j??????????????? 

int V,E; //??????????????°??? 


bool find_negative_loop(){
	int s[110];
	fill(s,s+V,0);
	
	for(int i = 0;i < V; i++){
		for(int j = 0;j < E; j++){
			edge e = es[j];
			if(s[e.to] > s[e.from] + e.cost){
				s[e.to] = s[e.from] + e.cost;
				if(i == V-1) return false;
			}
		}
	}
	return true;
}


void warshall_floyd(){
	
	for(int k = 0;k < V; k++){
		for(int i = 0;i < V; i++){
			for(int j = 0;j < V; j++){
				if(d[i][k] != INF && d[k][j] != INF)
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}


int main(){
	

	cin >> V >> E;
	
	for(int i = 0;i < V; i++){
		for(int j = 0;j < V; j++){
			d[i][j] = INF;
		}
		d[i][i] = 0;
	}
	for(int i = 0;i < E; i++) cin >> es[i].from >> es[i].to >> es[i].cost,d[es[i].from][es[i].to] = es[i].cost;
	
	if(find_negative_loop()){
		warshall_floyd();
		for(int i = 0;i < V; i++){
			for(int j = 0;j < V; j++){
				if(j != 0) cout << " ";
				if(d[i][j] == INF) cout << "INF";
				else cout << d[i][j];
			}
			cout << endl;
		}
	}else{
		cout <<"NEGATIVE CYCLE" <<endl;
	}
	

	return 0;
} 