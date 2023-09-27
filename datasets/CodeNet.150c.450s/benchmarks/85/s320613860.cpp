#include<stdio.h>

#define N 100
int A[N + 1][N + 1];
int p[N + 1];

int solve(int i, int j)
{
    if(!(A[i][j] < 0)){ return A[i][j]; }
    if(j == i){ A[i][i] = 0; return 0; }
    if(j == i + 1){
        A[i][j] = p[i - 1] * p[i] * p[i + 1];
        return A[i][j];
    }
    int min = -1, x;
    for(int k = i; k < j; k++){
        x = solve(i, k) + solve(k + 1, j) + p[i - 1] * p[k] * p[j];
        if(min < 0){ min = x; }
        else{ if(min > x) min = x; }
    }
    A[i][j] = min;
    return min;
}

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d %d", &p[i - 1], &p[i]);
        for(j = 1; j <= n; j++){
            A[i][j] = -1;
        }
    }
    printf("%d\n", solve(1, n));
    return 0;
}