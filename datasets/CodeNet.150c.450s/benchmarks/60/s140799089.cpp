#include <iostream>
using namespace std;

int main(){
	int graph[100][100] = {};
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		int now,m;
		cin >> now >> m;
		for(int j = 0;j < m;j++) {
			int t;
			cin >> t;
			graph[now - 1][t - 1] = 1;
		}
	}
	for(int i = 0;i < n;i++){
		cout << graph[i][0];
		for(int j = 1;j < n;j++){
			cout << " " << graph[i][j];
		}
		cout << endl;
	}
	return 0;
}