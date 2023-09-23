#include <cstdio>
#include <cmath>
using namespace std;

int dp[40];

int main(){
    dp[0] = 1;
    for(int x = 0; x <= 30; x++){
        dp[x+1] += dp[x];
        dp[x+2] += dp[x];
        dp[x+3] += dp[x];
    }
    int n;
    while( scanf(" %d", &n), n ){
        printf("%d\n", (int)ceil(dp[n]/3650.0));
    }
    return 0;
}