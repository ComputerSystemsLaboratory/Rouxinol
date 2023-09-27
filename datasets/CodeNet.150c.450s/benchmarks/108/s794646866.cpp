#include <iostream>
#include <queue>

using namespace std;

int main(){
	int n, u, k, v;
	int D[100];
	bool adj[100][100] = {};
	int pushed[100] = {};
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> u >> k;
		for (int j = 1; j <= k; j++){
			cin >> v;
			adj[u][v] = true;
		}
	}
	for (int i = 1; i <= n; i++){
		D[i] = -1;
	}
	queue<int> Q;
	Q.push(1);
	D[1] = 0;
	pushed[1] = 1;
	while(!Q.empty()){
		int m = Q.front();
		Q.pop();
		for (int i = 1; i <= n; i++){
			if (adj[m][i] == true && pushed[i] == 0){
				D[i] = D[m]+1;
				Q.push(i);
				pushed[i] = 1;
			}
		}
	}
	
	for (int i = 1; i < n+1; i++){
		cout << i << ' ' << D[i] << endl;
	}
}