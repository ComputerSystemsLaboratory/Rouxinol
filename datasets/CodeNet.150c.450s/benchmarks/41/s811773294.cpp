#include<iostream>
using namespace std;

#define MAX_VAL 110
#define int long long
constexpr long long INF = (long long)1e18;

int d[MAX_VAL][MAX_VAL];
int V = MAX_VAL;

void warshall_floyd(){
	for(int k = 0; k < V; k++)
		for(int i = 0; i < V; i++)
			for(int j = 0; j < V; j++) {
				if(d[i][k] == INF || d[k][j] == INF) continue;
				d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
			}
}

bool negative_cycle(){
	for(int k = 0; k < V; k++)
		for(int i = 0; i < V; i++)
			for(int j = 0; j < V; j++) {
				if(d[i][k] == INF || d[k][j] == INF) continue;
				if(d[i][k]+d[k][j] < d[i][j]) return true;
			}
		
	return false;
}

signed main(){
	
	int E;
	
	cin>>V>>E;
	
	for(int i = 0; i < V; i++){
		for(int j = 0; j < V; j++){
			if(i == j ) d[i][j] = 0;
			else d[i][j] = INF;
		}
	}
	
	for(int i = 0; i < E; i++){
		int s, t, D;
		
		cin>>s>>t>>D;
		
		d[s][t] = D;
	}
	
	warshall_floyd();
	negative_cycle;
	if(negative_cycle()) {
		cout<<"NEGATIVE CYCLE"<<endl;
		return 0;
	}
	
	for(int i = 0; i < V; i++){
		for(int j = 0; j < V; j++){
			if(j) cout<<" ";
			if(d[i][j] == INF) cout<<"INF";
			else cout<<d[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}
