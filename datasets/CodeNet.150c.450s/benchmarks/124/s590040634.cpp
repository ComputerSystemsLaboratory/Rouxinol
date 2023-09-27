#include <iostream>
#include <cmath>
#define INF 1000000000
using namespace std;

int main(){
	int n;
	int cost[100][100];
	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++) cost[i][j] = INF;
		cost[i][i] = 0;
	}
	for(int i = 0;i < n;i++){
		int now,m;
		cin >> now >> m;
		for(int j = 0;j < m;j++){
			int a,b;
			cin >> a >> b;
			cost[i][a] = b;
		}
	}
	for(int k = 0;k < n;k++){
		for(int i = 0;i < n;i++){
			for(int j = 0;j < n;j++){
				cost[i][j] = min(cost[i][j],cost[i][k] + cost[k][j]);
			}
		}
	}
	
	for(int i = 0;i < n;i++) cout << i << " " << cost[0][i] << endl;
	return 0;
}