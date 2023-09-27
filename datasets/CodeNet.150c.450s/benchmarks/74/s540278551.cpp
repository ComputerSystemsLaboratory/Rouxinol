#include<iostream>
#include<algorithm>
using namespace std;

const int MAX = 20;
const int MAX_VALUE = 50001;
const int INF = 100000000;

int main() {
	int n, m;
	int c[MAX];
	int table[MAX_VALUE];

	cin >> n >> m;
	for (int i = 0; i <= n; i++) {
		table[i] = INF;
	}
	for (int i = 0; i < m; i++) {
		cin >> c[i];
		table[c[i]] = 1;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			if (i + c[j] > n)continue;
			table[i + c[j]] = min(table[i] + 1, table[i + c[j]]);
		}
	}

	cout << table[n] << endl;
	return 0;
}