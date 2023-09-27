#include <iostream>
using namespace std;
#define MROW (101)

int main() {
	int N;
	cin >> N;
	int E[MROW][MROW];
	for (int n1 = 1; n1<=N; ++n1) {
		for (int n2 = 1; n2<=N; ++n2) {
			E[n1][n2] = 0;
		}
	}
	for (int n=0;n<N;++n) {
		int u, K;
		cin >> u >> K;
		for (int k=0;k<K;++k) {
			int v;
			cin >> v;
			E[u][v] = 1;
		}	
	}
	for (int i=1;i<=N;++i) {
		for (int j=1;j<=N;++j) {
			if (j>1) cout << " ";
			cout << E[i][j];
		}
		cout << endl;
	}
	return 0;
}

