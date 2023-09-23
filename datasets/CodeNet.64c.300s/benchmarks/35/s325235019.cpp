#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	// Input
	int adj_m[100][100] = { 0 };
	int n;
	cin >> n;
	int u,v,k;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			adj_m[u - 1][v - 1] = 1;
		}
	}

	// Output
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j)
				cout << " ";
			cout << adj_m[i][j];
		}
		cout << endl;
	}
	return 0;
}