#include <cstdio>
using namespace std;


#define L 1000000007

int main(){
	int m, n, dig;
	long dp[32], p = 1;
	scanf("%d%d", &m, &n);
	dp[0] = m;
	if (n % 2 != 0) {
		p = m;
	}
	for (int i = 1; i < 32; i++) {
		if (n < (1 << i)) {
			dig = i;
			break;
		}
		dp[i] = (dp[i - 1] * dp[i - 1]) % L;
		if (n & (1 << i)) {
			p = (p*dp[i]) % L;
		}
	}
	printf("%ld\n", p);

	return 0;
}