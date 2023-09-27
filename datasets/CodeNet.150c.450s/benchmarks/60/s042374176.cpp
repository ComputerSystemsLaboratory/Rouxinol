#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int Adj[101][101] = {{0}};
	for (int i = 0;i < n;i++) {
		int th;
		cin >> th;
		int k;
		cin >> k;
		int adj;
		if(k>0)
		for (int j = 0;j < k;j++) {
			cin >> adj;
			Adj[th-1][adj-1] = 1;
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (j) cout << " ";
			cout << Adj[i][j];
		}
		cout << endl;
	}
}