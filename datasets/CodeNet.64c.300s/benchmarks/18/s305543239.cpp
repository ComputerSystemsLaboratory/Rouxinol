#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int MAX = 30;
int dp[MAX + 1];

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	dp[0] = 1;
	for (int i = 0; i <= MAX - 1; i++) {
		for (int j = 1; j <= 3; j++) {
			if (i + j <= MAX)
				dp[i + j] += dp[i];
		}
	}

	int n;
	while (cin >> n , n) {
		cout << ((dp[n] + 9) / 10 + 364) / 365 << endl;
	}
}