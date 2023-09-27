#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n, w;
int a[100][2], dp[101][11001];

int compare_int(const void* a, const void* b) { return ((int*) a)[0] - ((int*) b)[0]; }

int func(int x, int wsum) {
	if (wsum > w) {
		return 0;
	}
	int max = 0;
	for (int i = x + 1; n > i; i++) {
		if (!dp[i][wsum + a[i][0]]) 
			dp[i][wsum + a[i][0]] = func(i, wsum + a[i][0]);
		if (max < dp[i][wsum + a[i][0]]) max = dp[i][wsum + a[i][0]];
	}
	if(x != -1)	
		return max + a[x][1];
	else return max;
}

int main() {
	scanf("%d %d", &n, &w);
	for (int i = 0; n > i; i++) {
		scanf("%d %d", &a[i][1], &a[i][0]);
	}
	//qsort(a, n, sizeof(int), compare_int);
	printf("%d\n", func(-1, 0));
}