#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<string.h>
#include<functional>
#include<queue>
#include<stack>
#include<math.h>
#define INF 999999
#define EPS 1.0e-6

using namespace std;

int n;
int adj[105][105];

int main()
{
	cin >> n;
	int u, k, v;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			cin >> v;
			v--;
			adj[i][v]++;
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1; j++) {
			cout << adj[i][j] << " ";
		}
		cout << adj[i][n - 1] << endl;
	}

	return 0;
}