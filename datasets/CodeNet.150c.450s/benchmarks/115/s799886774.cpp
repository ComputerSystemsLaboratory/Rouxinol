#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
#define MAX_N (1010)

int dp[MAX_N][MAX_N];

int main()
{
    int q;
    scanf("%d", &q);

    for ( int t = 0; t < q; t++ ) {
	string X;
	string Y;
	cin >> X;
	cin >> Y;

	dp[0][0] = ( X[0] == Y[0] ) ? 1 : 0;

	for ( int i = 1; i < X.size(); i++ ) {
	    dp[i][0] = ( X[i] == Y[0] ) ? 1 : dp[i-1][0];
	}
	
	for ( int i = 1; i < Y.size(); i++ ) {
	    dp[0][i] = ( X[0] == Y[i] ) ? 1 : dp[0][i-1];
	}

	for ( int i = 1; i < X.size(); i++ ) {
	    for ( int j = 1; j < Y.size(); j++ ) {
		dp[i][j] = ( X[i] == Y[j] ) ? dp[i-1][j-1] + 1 : max( dp[i][j-1], dp[i-1][j] );
	    }
	}

	printf("%d\n", dp[X.size()-1][Y.size()-1]);
    }

    return 0;
}