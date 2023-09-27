#include<iostream>
#include<algorithm>
#define INF 10000000009
using namespace std;
int main() {
	int n, m;
	int c[20];
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> c[i];
	}
	int DP[50001];
	DP[0] = 0;
	for (int i = 1; i <= n; i++) {
		DP[i] = INF;
		for (int j = 0; j < m; j++) {
			if (i - c[j] < 0)continue;
			DP[i] = min(DP[i],DP[i - c[j]] + 1);
		}
	}
	cout << DP[n] << endl;
	return 0;
}
