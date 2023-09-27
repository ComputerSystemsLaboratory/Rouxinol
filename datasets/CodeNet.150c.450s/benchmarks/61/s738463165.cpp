#include <stdio.h>
#pragma warning(disable : 4996)
int N, A, B, C, X, Y[100], P;
int main() {
	while (true) {
		scanf("%d%d%d%d%d", &N, &A, &B, &C, &X);
		if (N == 0 && A == 0 && B == 0 && C == 0 && X == 0) break;
		for (int i = 0; i < N; i++) scanf("%d", &Y[i]); P = 0;
		bool flag = false;
		for (int i = 0; i <= 10000; i++) {
			if (X == Y[P]) P++;
			if (N == P) {
				printf("%d\n", i); flag = true; break;
			}
			X = (A * X + B) % C;
		}
		if (!flag) {
			printf("-1\n");
		}
	}
	return 0;
}