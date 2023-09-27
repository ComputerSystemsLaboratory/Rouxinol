#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 1000100;

vector<int> tetras;
vector<int> oddTetras;

int dp[MAX];
int oddDp[MAX];

int main() {
	for (int i = 1; i < 200; i++) {
		int n = i * (i + 1) * (i + 2) / 6;
		tetras.push_back(n);
		if (n % 2 == 1)
			oddTetras.push_back(n);
	}

	for (int i = 0; i < MAX; i++) {
		dp[i] = oddDp[i] = i;
	}
	for (int i = 1; i < MAX; i++) {
		for (int j = 0; tetras[j] <= i; j++) {
			dp[i] = min(dp[i], dp[i - tetras[j]] + 1);
		}
		for (int j = 0; oddTetras[j] <= i; j++) {
			oddDp[i] = min(oddDp[i], oddDp[i - oddTetras[j]] + 1);
		}
	}

	int n;
	while (cin >> n , n != 0) {
		cout << dp[n] << " " << oddDp[n] << endl;
	}
}