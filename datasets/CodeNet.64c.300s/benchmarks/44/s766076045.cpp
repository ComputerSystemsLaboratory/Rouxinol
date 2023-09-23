#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

const int MAX_V = 11;
int d[MAX_V][MAX_V];
int V;
int x[MAX_V];

void floyd_warshall()
{
	for(int k = 0; k < V; k++){
		for(int i = 0; i < V; i++){
			for(int j = 0; j < V; j++){
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}

int main()
{
	int E;
	while(cin>>E && E){
		memset(d, 0x3f, MAX_V * MAX_V *sizeof(int));
		for(int i = 0; i < MAX_V; i++){
			d[i][i] = 0;
		}
		V = 0;
		for(int i = 0; i < E; i++){
			int u, v, cost;
			cin>>u>>v>>cost;
			d[u][v] = cost;
			d[v][u] = cost;
			V = max(V, max(v, u) + 1);
		}
		floyd_warshall();
		memset(x, 0, V * sizeof(int));
		for(int i = 0; i < V; i++){
			for(int j = 0; j < V; j++){
				x[i] += d[i][j];
			}
		}
		int ans = min_element(x, x + V) - x;
		cout<<ans<<' '<<x[ans]<<endl;
	}
	return 0;
}
