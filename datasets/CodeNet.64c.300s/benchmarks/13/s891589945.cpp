#include<iostream>
using namespace std;

int dp[45];

int fib(int n) {
	if (dp[n] != -1)return dp[n];
	int res;

	if (n == 0 || n == 1) {
		res = 1;
	}
	else {
		res = fib(n - 1) + fib(n - 2);
	}

	dp[n] = res;
	return res;
}

int main() {
	for (int i = 0; i < 45; i++) {
		dp[i] = -1;
	}
	int n;
	cin >> n;
	cout << fib(n) << endl;

	return 0;
}