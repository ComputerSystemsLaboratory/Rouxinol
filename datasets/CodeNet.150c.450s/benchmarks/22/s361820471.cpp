#include<iostream>
#include<vector>
#include<queue>
#include<climits>
using namespace std;

struct Edge{int s,t,cost;};

int main(){
	int V,E,r;
	cin >> V >> E >> r;
	
	vector<Edge> G(E);
	for (int i=0;i<E;i++){
		cin >> G[i].s >> G[i].t >> G[i].cost;
	}
	
	vector<int> d(V,INT_MAX);
	d[r]=0;
	
	for (int i=0;i<V;i++){
		for (int j=0;j<E;j++){
			Edge e=G[j];
			if(d[e.s]==INT_MAX){
				continue;
			}else{
				if(d[e.t]>d[e.s]+e.cost){
					d[e.t]=d[e.s]+e.cost;
				}
			}
		}
	}
	bool flag=0;
	for (int j=0;j<E;j++){
			Edge e=G[j];
			if(d[e.s]==INT_MAX){
				continue;
			}else{
				if(d[e.t]>d[e.s]+e.cost){
					flag=1;
					break;
				}
			}
		}
	
	if(flag){
		cout << "NEGATIVE CYCLE" <<endl;
	}else{
	for (int i=0;i<V;i++){
		if(d[i]==INT_MAX){
			cout << "INF" << endl;
		}else{
			cout << d[i] << endl;
		}
	}
	}
	return 0;
}