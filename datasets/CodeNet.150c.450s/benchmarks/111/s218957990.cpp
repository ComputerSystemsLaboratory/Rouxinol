#include <iostream>
#include <cstdio>
#include <algorithm>

#define rep(X, Y) for( int (X) = 0; (X) < (Y); ++(X) )
#define rept(X, Y, Z) for( int (X) = (Y); (X) < (Z); ++(X) )

int N, d[101];
long long dp[101][21];

int main(){
	scanf("%d", &N);

	rep( i, N ) scanf("%d", d + i);
	dp[0][d[0]] = 1;

	rept( i, 1, N - 1 ){
		rep( l, 21 ){
			if( l + d[i] <= 20 ) dp[i][l + d[i]] += dp[i - 1][l];
			if( l - d[i] >= 0 ) dp[i][l - d[i]] += dp[i - 1][l];
		}
	}

	std::cout << dp[N - 2][d[N - 1]] << std::endl;

	return 0;
}