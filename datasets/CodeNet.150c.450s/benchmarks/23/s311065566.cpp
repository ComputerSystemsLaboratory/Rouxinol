#include<cstdio>
#define rep(i,a) for(int i=0;i<(a);++i)

const int MAX_N = 44;

int n;
int fib[MAX_N+1];

int main()
{
    scanf( "%d", &n );

    fib[0] = 1, fib[1] = 1;

    rep( i, n-1 )
        fib[i+2] = fib[i] + fib[i+1];

    printf( "%d\n", fib[n] );

    return 0;
}