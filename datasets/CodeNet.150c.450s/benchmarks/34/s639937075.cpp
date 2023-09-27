#include <cstdio>

using namespace std;

int dp[31];

int main()
{
	dp[0] = 1;

	for (int i = 1; i <= 30; ++i) {
		for (int j = 1; j <= 3; ++j) {
			if (i-j >= 0) dp[i] += dp[i - j];
		}
	}

	int n;

	while (scanf("%d", &n), n) {
		printf("%d\n", (dp[n] + 3649) / 3650);
	}
}