#include <stdio.h>

#define LL long long
#define ULL unsigned long long
#define UI unsigned int
#define UC unsigned char
#define UL unsigned long

int main() {
	LL N, Q;
	scanf("%lld", &N);
	LL A, S = 0;
	static LL llCnt[100001] = {0, };
	for (LL i = 0; i < N; i++) {
		scanf("%lld", &A);
		S += A;
		llCnt[A]++;
	}
	scanf("%lld", &Q);
	LL B, C;
	for (LL i = 0; i < Q; i++) {
		scanf("%lld %lld", &B, &C);
		S += ((C - B) * llCnt[B]);
		llCnt[C] += llCnt[B];
		llCnt[B] = 0;
		printf("%lld\n", S);
	}

	return 0;
}
