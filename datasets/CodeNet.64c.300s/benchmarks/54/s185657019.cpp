#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n, num[100];
unsigned long long dp[101][21];

int main(){
    scanf("%d", &n);
    for(int x = 0; x < n; x++){
        scanf(" %d", &num[x]);
    }
    dp[0][num[0]] = 1;
    for(int x = 1; x < n-1; x++){
        for(int y = 0; y <= 20; y++){
            if(!dp[x-1][y]) continue;
            if(y + num[x] <= 20) dp[x][y + num[x]] += dp[x-1][y];
            if(y - num[x] >= 0)  dp[x][y - num[x]] += dp[x-1][y];
        }
    }
    printf("%lld\n", dp[n-2][num[n-1]]);
    return 0;
}