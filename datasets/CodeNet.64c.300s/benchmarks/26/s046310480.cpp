#include<cstdio>
int main() {
	long long m, n, p=1000000007, d, ans=1;
	scanf("%lld%lld", &m, &n);
	for (d = 1 << 30; d >= 1; d >>= 1) {
		if (d&n) {
			ans = ((ans*ans)%p)*m%p;
		}
		else {
			ans = (ans*ans)%p;
		}
	}
	printf("%d\n", ans);
	return 0;
}
