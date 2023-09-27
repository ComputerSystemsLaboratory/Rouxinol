#include <stdio.h>

int main() {
	int N, K;
	scanf ("%d %d", &N, &K);
	int scores[N];

	for (int i = 0; i < N; i++) {
	  scanf("%d", &scores[i]);
	}
	
	for (int i = 0; i < N-K; i++) {
		(scores[i] < scores[i+K]) ? puts("Yes") : puts("No");
	}
	
	return 0;
}