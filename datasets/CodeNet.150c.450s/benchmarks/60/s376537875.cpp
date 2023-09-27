#include <iostream>
using namespace std;

int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);

	static int M[101][101];
	int n;
	cin >> n;

	int u, k, v;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			M[u][v] = 1;
		}	
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j != 1) cout << " ";
			cout << M[i][j];
		}
		cout << endl;
	}
	return 0;
}