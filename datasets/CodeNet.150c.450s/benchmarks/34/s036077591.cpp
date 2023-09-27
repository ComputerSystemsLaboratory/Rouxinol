#include<iostream>

using namespace std;

int func(int n) {
	long long memo[100] = { 0 };
	memo[1] = 1;
	memo[2] = 2;
	memo[3] = 4;
	for (int i = 4; i <= n; i++) {
		memo[i] += memo[i - 1] + memo[i - 2] + memo[i - 3];
	}
	return memo[n] / (10 * 365) + 1;
}

int main() {
	int N;
	while (cin >> N) {
		if (N == 0) {
			break;
		}
		cout << func(N) << endl;
	}
}