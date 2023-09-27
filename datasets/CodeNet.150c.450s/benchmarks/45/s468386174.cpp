#include<cstdio>
#include<cstdlib>
#include<string>
#include<cmath>
#include<algorithm>
#include<queue>
#include<string.h>

const int MAXN = 1000000000;
const int MOD = 1000000007;

int power(long long m, int n) {
	long long rs = 1;
	while (n) {
		if (n & 1) {
			rs = ((rs % MOD) * m) % MOD;
		}
		m = ((m % MOD) * (m % MOD)) % MOD;
		n >>= 1;
	}
	
	return rs % MOD;
}

int main() {
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d\n", power(m, n));
	return 0;
}
