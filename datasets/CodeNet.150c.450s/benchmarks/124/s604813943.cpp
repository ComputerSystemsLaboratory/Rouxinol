#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
	int a[100][100];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = 10000000;
		}
		a[i][i] = 0;
	}

	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		a[i][i] = 0;
		for (int j = 0; j < k; j++) {
			int c, v;
			cin >> v >> c;
			a[u][v] = c;
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << i << " " << a[0][i] << endl;
	}
	return 0;
}