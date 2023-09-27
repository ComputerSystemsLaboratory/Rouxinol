#include <cstdio>
int N, A, B, C, X, Y[109];
int main() {
	while(scanf("%d%d%d%d%d", &N, &A, &B, &C, &X), N) {
		for(int i = 0; i < N; i++) scanf("%d", &Y[i]);
		int P = 0, ret = -1;
		for(int i = 0; i <= 10000; i++) {
			if(X == Y[P]) {
				if(++P == N) {
					ret = i; break;
				}
			}
			X = (A * X + B) % C;
		}
		printf("%d\n", ret);
	}
}