#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<vector<int>>adj(n, vector<int>(n));
	for (int i = 0;i < n;i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0;j < k;j++) {
			int v;
			cin >> v;
			adj[u - 1][v - 1] = 1;
		}
	}
	for (int i = 0;i <n;i++) {
		for (int j = 0;j <n;j++) {
			if (j == 0) {
				cout << adj[i][j];
			}
			else {
				cout << " " << adj[i][j];
			}

		}
		cout << endl;
	}

}