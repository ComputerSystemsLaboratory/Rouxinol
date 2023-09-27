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
	int g[100][100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			g[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		int u, k, v;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			g[u - 1][v - 1] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j > 0) {
				cout << " ";
			}
			cout << g[i][j];
		}
		cout << endl;
	}
	return 0;
}