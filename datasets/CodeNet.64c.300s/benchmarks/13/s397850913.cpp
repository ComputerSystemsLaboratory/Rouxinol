#include <cstdio>

using namespace std;

int sum = 0, dp[50];

int fib( int n ){

    if( n == 0 || n == 1 ){

        return dp[n] = 1;

    } else if( dp[n] != -1 ){

        return dp[n] ;        

    } else{

        return dp[n] = fib( n - 1 ) + fib( n - 2 );

    }

}

int main(){

    int n;

    scanf("%d", &n);

    for( int i = 0; i < 50; i++ ) dp[i] = -1;

    int ans = fib(n);

    printf("%d\n", ans);

}
