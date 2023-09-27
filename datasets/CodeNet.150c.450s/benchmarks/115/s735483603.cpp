#include<algorithm>
#include<iostream>
#include<cstring>
#define rep(i,a) for(int i=0;i<(a);++i)
#define repd(i,a) for(int i=(a);i>=0;--i)
#define clr(a,v) memset((a),(v),sizeof(a))

const int MAX_X = 1000, MAX_Y = 1000;

int q;
std::string X, Y;
int dp[MAX_X+1][MAX_Y+1];

int main()
{
    std::cin >> q;
    while( q-- )
    {
        std::cin >> X >> Y;

        clr( dp, 0 );

        repd( i, X.size()-1 ) repd( j, Y.size()-1 )
        {
            if( X[i] == Y[j] )
                dp[i][j] = dp[i+1][j+1]+1;
            else
                dp[i][j] = std::max( dp[i+1][j], dp[i][j+1] );
        }

        printf( "%d\n", dp[0][0] );
    }

    return 0;
}