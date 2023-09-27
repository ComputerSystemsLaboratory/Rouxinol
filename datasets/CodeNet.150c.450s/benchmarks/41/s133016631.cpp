#include <bits/stdc++.h>
using namespace std;
#define dhoom ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  
typedef long long ll;
typedef pair<ll,ll> pll;
const ll inf = 99999999999;
const int nax = 2e6 + 7;
int n , m;
ll graph[200][200];
ll dis[200][200];
int main(){
	dhoom;
	int n , m;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			graph[i][j] = inf;
		}
	}
	for(int i = 0 ; i < n ; i++)
		graph[i][i] = 0;
	for(int i = 0 ; i < m ; i++){
		int u , v , w;
		cin >> u >> v >> w;
		graph[u][v] = w;
	}
	for(int k = 0 ; k < n ; k++){
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				if(graph[i][k] == inf || graph[k][j] == inf)continue;
				   graph[i][j] = min(graph[i][j] , graph[i][k] + graph[k][j]);
			}
			
		}
	}
	for(int i = 0 ; i < n ; i++){
		if(graph[i][i] < 0)
			return cout << "NEGATIVE CYCLE\n",0;
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ;j++){
			if(j != 0)
				cout << " ";
			if(graph[i][j] >= inf)
				cout << "INF";
			else 
				cout << graph[i][j];
		}
		cout << endl;
	}
    return 0;
}


