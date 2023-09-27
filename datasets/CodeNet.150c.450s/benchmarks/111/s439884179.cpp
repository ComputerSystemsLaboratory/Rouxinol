#include <iostream>
#define INF -100000
using namespace std;

int n;
int data[100];

long long memo[21][100];

long long dfs(int sum, int pos) {
	// cout << sum << " " << pos << endl;
	if (sum > 20 || sum < 0) return 0;
	if (pos == n-2) {
		if (sum == data[n-1]) return 1;
		return 0;
	}
	if (memo[sum][pos] != -INF) return memo[sum][pos];
	memo[sum][pos] = dfs(sum + data[pos+1], pos+1) + dfs(sum - data[pos+1], pos+1);
	return memo[sum][pos];
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> data[i];
	}
	for (int i = 0;i < 21;i++) {
		for (int j = 0; j < 100;j++) {
			memo[i][j] = -INF;
		}
	}
	cout << dfs(data[0],0) << endl;
	return 0;
}