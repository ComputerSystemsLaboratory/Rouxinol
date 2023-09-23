#include<iostream>
using namespace std;

int main(void) {
	int n;
	int m;
	int b[101];
	int num[101][101];
	int sum[101] = {};

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int t = 1; t <= m; t++) {
			cin >> num[i][t];
		}
	}

	for (int i = 1; i <= m; i++) {
		cin >> b[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int t = 1; t <= m; t++) {
			sum[i] += num[i][t] * b[t];
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << sum[i] << "\n";
	}

	return 0;
}