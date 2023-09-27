#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

#define INF 1000000

int dp[25][50005];
int c[25];

int main(void) {
    int n,m;
    scanf("%d%d",&n,&m);

    for(int i=1; i<=m; i++)
        scanf("%d",&c[i]);

    for(int i=0; i<=20; i++)
        for(int j=0; j<=50000; j++)
            dp[i][j] = INF;

    dp[0][0] = 0;


    for(int i=1; i<=m; i++)
        for(int j=0; j<=50000; j++)
            if(j>=c[i])
                dp[i][j] = min( dp[i-1][j], dp[i][j-c[i]]+1 );
            else
                dp[i][j] = dp[i-1][j];

    printf("%d\n", dp[m][n]);

    return 0;
}