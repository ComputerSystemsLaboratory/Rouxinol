#include <stdio.h>
typedef long long LL;

int main() {
	LL F[21]; 
	F[0] = 1;
	for(int i = 1; i <= 20; ++i) F[i] = F[i - 1] * i;
	int n;
	while(~scanf("%d", &n)) {
		printf("%lld\n", F[n]);
	}
	return 0;
}