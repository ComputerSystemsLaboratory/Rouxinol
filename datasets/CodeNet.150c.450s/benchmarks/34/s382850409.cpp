#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, i;
	double dp[30];
	while (cin >> n, n){
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 4;
		for (i = 4; i <= n; i++) {
			dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		}
		cout << ceil(dp[n] / 3650) << endl;
	}
}