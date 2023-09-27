#include<cstdio>


int main()
{
    long long ret = 1,n;
    scanf( "%lld\n", &n );
    for( int i = 1; i <= n; i++ )
    {
        ret *= i;
    }
    printf( "%lld\n", ret );
    return 0;
}
