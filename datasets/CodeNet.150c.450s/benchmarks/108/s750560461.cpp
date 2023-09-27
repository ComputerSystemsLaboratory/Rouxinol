
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <ctime>
#include <string>
#include <queue>

using namespace std;

const int MAX_N = 100;
int n;
int suji[MAX_N];
int	num[MAX_N];
int adj[MAX_N][MAX_N];
int ans[MAX_N][MAX_N];
int D[MAX_N];

void bfs(int src){
	queue<int> Q;
	Q.push(src);
	D[src] = 0;

	while(!Q.empty()){
		int cur = Q.front();
		Q.pop();

		for(int i = 1; i < n; i++){
			if(ans[cur][i] == 1 && D[i] == -1){
				D[i] = D[cur] + 1;
				Q.push(i);
			}
		}
	}
}


int main(void){

	cin >> n;
	for(int i = 0; i < n; i++){
		
		cin >> suji[i] >> num[i];
		D[i] = -1;
		
		for(int j = 0; j < num[i]; j++){
			cin >> adj[i][j];
			adj[i][j] -= 1;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			ans[i][j] = 0;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < num[i]; j++){
			ans[i][adj[i][j]] = 1;
		}
	}

	bfs(0);

	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << D[i] << endl;
	}
	
    return 0;
}