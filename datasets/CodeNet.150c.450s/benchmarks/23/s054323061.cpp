#include <stdio.h>

#define MAX_N (50)

int memo[MAX_N];

int main()
{
    int n;
    scanf("%d", &n);

    memo[0] = memo[1] = 1;

    for ( int i = 2; i <= n; i++ ) {
    	memo[i] = memo[i-1] + memo[i-2];
    }
    printf("%d\n", memo[n]);

    return 0;
}