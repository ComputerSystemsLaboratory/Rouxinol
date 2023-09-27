#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
#include <utility>

#define INF 1000000000000000

using namespace std;

typedef long long int lli;
typedef pair<int, int> P;

struct edge{
	int from, to, cost;
};

int V, E, r;
edge e[9900];
lli d[100][100];

bool solve(){
	for(int k = 0;k < V;k++){
		for(int i = 0;i < V;i++){
			for(int j = 0;j < V;j++){
				if(d[i][j] != INF || (d[i][k] != INF && d[k][j] != INF))
					d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
	for(int i = 0;i < V;i++){
		if(d[i][i] < 0) return false;
	}
	return true;
}

int main(void){
	cin >> V >> E;
	for(int i = 0;i < V;i++){
		fill(d[i], d[i]+V, INF);
		d[i][i] = 0;
	}
	for(int i = 0;i < E;i++){
		int a, b, c;
		cin >> a >> b >> c;
		d[a][b] = c;
	}
	if(solve()){
		for(int i = 0;i < V;i++){
			for(int j = 0;j < V;j++){
				if(d[i][j] != INF)
					cout << d[i][j];
				else
					cout << "INF";
				if(j < V-1) cout << " ";
			}
			cout << endl;
		}
	}else{
		cout << "NEGATIVE CYCLE" << endl;
	}
	return 0;
}