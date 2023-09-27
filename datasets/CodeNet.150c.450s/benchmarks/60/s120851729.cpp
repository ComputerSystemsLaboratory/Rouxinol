#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int n;
int E[MAX][MAX];

int main()
{
	int n;
	cin >> n;
	for (int i = 0, u, k; i < n; i++) {
		cin >> u >> k;
		for (int j = 0, v; j < k; j++) {
			cin >> v;
			E[u - 1][v - 1] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << E[i][0];
		for (int j = 1; j < n; j++) {
			cout << ' ' << E[i][j];
		}
		cout << endl;
	}
	return 0;
}