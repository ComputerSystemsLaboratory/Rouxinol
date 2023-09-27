#include <stdio.h>

int main(){
	int w, n, col[31];
	scanf("%d", &w);
	scanf("%d", &n);
	for (int i = 1; i <= w; i++){
		col[i] = i;
	}
	for (int i = 0; i < n; i++){
		int a, b;
		scanf("%d,%d", &a, &b);
		int tmp = col[a];
		col[a] = col[b];
		col[b] = tmp;
	}
	for (int i = 1; i <= w; i++){
		printf("%d\n", col[i]);
	}
	return 0;
}