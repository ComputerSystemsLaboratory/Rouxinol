#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <queue>
#include <string>
#include <set>
#include <vector>

using namespace std;
typedef long long ll;
#define MAX_N (22)
#define MAX_M (2010)
int n;
int A[MAX_N];
int q;
bool dp[2][MAX_M+1];
int main()
{
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) scanf("%d", &A[i]);
    dp[1][0] = true;
    
    for ( int i = 0; i < n; i++ ) {
	for ( int j = 0; j <= MAX_M; j++ ) {
	    if ( dp[((i+1)%2)][j] ) {
		dp[(i%2)][j] = true;
		if ((j + A[i]) <= MAX_M ) {
		    dp[(i%2)][j + A[i]] = true;
		}
	    }
	}
    }

    scanf("%d", &q);
    for ( int i = 0; i < q; i++ ) {
	int m;
	scanf("%d", &m);
	printf("%s\n", (dp[(n+1) % 2][m]) ?  "yes" : "no");
    }
    
    return 0;
}