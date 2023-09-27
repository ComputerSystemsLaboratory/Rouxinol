#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
	int n;

	while( true ) {
		cin >> n;

		if(n == 0) {
			break;
		}

		vector< int > dp(n + 1, 0);

		dp[0] = 1;

		for(int i = 1; i <= n; i++) {
			for(int j = -1; j >= -3; j--) {
				if(i + j < 0) {
					continue;
				}
				dp[i] += dp[i + j];
			}
		}

		int count = dp[n] / 10;
		if(dp[n] % 10 != 0) {
			count++;
		}

		int year = count / 365;
		if(count % 365 != 0) {
			year++;
		}

		cout << year << endl;
	}
}