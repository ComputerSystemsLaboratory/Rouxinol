#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 100000000000000
class WarshallFloyed{
public:
	int V; //????????°
	ll D[256][256]; //i??????j???????????????D[i][j]
	WarshallFloyed(){}
	WarshallFloyed(int _V){
		V = _V;
	}
	void init(){
		for(int i = 0; i < V; ++i){
			for(int j = 0; j < V; ++j){
				if(i == j){
					D[i][j] = 0;
				}
				else{
					D[i][j] = INF;
				}
			}
		}
	}
	bool add_edge(int from,int to,ll cost){
		if(D[from][to] != INF)return false;
		D[from][to] = cost;
		return true;
	}
	bool getShortestPath(){
		for(int k = 0; k < V; ++k){
			for(int i = 0; i < V; ++i){
				for(int j = 0; j < V; ++j){
					D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
				}
			}
		}
		return true;
	}

	void print(){
		for(int i = 0; i < V; ++i){
			for(int j = 0; j < V; ++j){
				if(D[i][j] >= 1e9*2) printf("INF%c",j==V-1?'\n':' ');
				else printf("%lld%c",D[i][j],j==V-1?'\n':' ');
			}
		}
	}
};


int main(){
	int V,E;
	scanf("%d%d",&V,&E);
	WarshallFloyed W = WarshallFloyed(V);
	W.init();
	for(int i = 0; i < E; ++i){
		int a,b;
		ll c;
		scanf("%d%d%lld",&a,&b,&c);
		W.add_edge(a,b,c);
	}
	W.getShortestPath();
	for(int i = 0; i < V; ++i){
		if(W.D[i][i] < 0){
			puts("NEGATIVE CYCLE");
			return 0;
		}
	}
	W.print();
	return 0;
}