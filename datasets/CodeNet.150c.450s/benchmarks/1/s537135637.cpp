#include <iostream>
#include <cstdio>
using namespace std;
int n, a;
int main() {
	cin >> n;
	int dp[n];
	fill(dp, dp+n, 1001001001);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		*lower_bound(dp, dp+n, a) = a;
	}
	printf("%d\n", (int)(lower_bound(dp, dp+n, 1001001001)-dp));
}