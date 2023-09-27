#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	int N, M, D, P;
	while (cin >> N >> M, N || M) {
		vector< int > dp(11);
		for (int i = 0; i < N; i++) {
			cin >> D >> P;
			dp[P] += D;
		}
		int res = 0;
		for (int i = 10; i >= 0; i--) {
			if (dp[i] < M) {
				M -= dp[i];
			}
			else {
				res += (dp[i] - M) * i;
				M = 0;
			}
		}
		cout << res << endl;
	}
	return 0;
}