#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string.h>
using namespace std;

#define MAX_N (105)
#define MAX_W (10005)
int v[MAX_N];
int w[MAX_N];
int dp[MAX_W];

int main()
{
    int N, W;
    scanf("%d %d", &N, &W);
    memset( dp, 0, MAX_W * sizeof(int) );

    for ( int i = 0; i < N; i++ ) {
	scanf("%d %d", &v[i], &w[i]);
    }

    for ( int i = 0; i < N; i++ ) {
	for ( int j = W; j >= w[i]; j-- ) { // ??????????????´??°???????????¨??§1?????§??????
	    dp[j] = max( dp[j], dp[j - w[i]] + v[i] );
	}
    }
    
    printf("%d\n", dp[W]);
    return 0;
}