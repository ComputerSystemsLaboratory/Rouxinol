#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int dp[1000005];
int dp2[1000005];
int pl[180];

int main() {
	//init
	for (int i = 1; i<=180; i++)pl[i-1] = (i*(i + 1)*(i + 2)) / 6;
	memset(dp, 0x7f, sizeof(dp));
	memset(dp2, 0x7f, sizeof(dp2));
	dp[0] = 0;
	dp2[0] = 0;
	for (int i = 0; i < 1000000; i++) {
		for (int j = 0; j < 180; j++) {
			if(i+pl[j] <= 1000000)dp[i + pl[j]] = min(dp[i] + 1, dp[i + pl[j]]);
			if (i + pl[j] <= 1000000 && pl[j]&1)dp2[i + pl[j]] = min(dp2[i] + 1, dp2[i + pl[j]]);
		}
	}
	while (1) {
		int n;
		scanf("%d", &n);
		if (n == 0)break;
		printf("%d %d\n", dp[n], dp2[n]);
	}
	return 0;
}