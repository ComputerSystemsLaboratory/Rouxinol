#include <cstdio>

int main(){
	int A, B, N;
	int As, Bs;

	while (1){
		scanf("%d", &N);
		if (N == 0) break;
		As = Bs = 0;
		for (int i = 0; i < N; i++){
			scanf("%d %d", &A, &B);
			if (A > B) {
				As += A + B;
			}
			else if(A < B){
				Bs += A + B;
			} else {
				As += A;
				Bs += B;
			}
		}
		printf("%d %d\n", As, Bs);
	}

	return 0;
}