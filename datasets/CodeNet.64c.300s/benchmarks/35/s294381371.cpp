#include<stdio.h>

int G[101][101];

int main()
{
    int n, i, j, a, b, e;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
		for(j = 1; j <= n; j++){ G[i][j] = 0; } }

    for(i = 1; i <= n; i++){ scanf("%d %d", &a, &e);
		for(j = 1; j <= e; j++){ scanf("%d", &b); G[a][b] = 1; } }

    for(i = 1; i <= n; i++){ printf("%d", G[i][1]);
	for(j = 2; j <= n; j++){ printf(" %d", G[i][j]); }
        printf("\n");
    }
    return 0;
}