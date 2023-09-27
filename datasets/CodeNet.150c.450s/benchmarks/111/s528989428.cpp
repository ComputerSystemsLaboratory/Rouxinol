#include<bits/stdc++.h>
using namespace std ;

typedef long long int lint ;

lint dp[100][21] = {0} ;
int n = 0 ;
int number[100] = {0} ;

int main()
{
    cin >> n ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> number[i] ;
    }

    dp[0][ number[0] ] = 1 ;
    for ( int i = 0 ; i < n-2 ; i++ )
    {
        for ( int j = 0 ; j <= 20 ; j++ )
        {
            if ( j-number[i+1] >= 0 && j+number[i+1] <= 20 )
            {
                dp[ i+1 ][ j-number[i+1] ] += dp[i][j] ;
                dp[ i+1 ][ j+number[i+1] ] += dp[i][j] ;
            }
            else if ( j-number[i+1] < 0 )
            {
                dp[ i+1 ][ j+number[i+1] ] += dp[i][j] ;
            }
            else if ( j+number[i+1] > 20 )
            {
                dp[ i+1 ][ j-number[i+1] ] += dp[i][j] ;
            }
        }
    }
    printf("%lld\n",dp[ n-2 ][ number[ n-1 ] ]) ;

    return 0 ;
}