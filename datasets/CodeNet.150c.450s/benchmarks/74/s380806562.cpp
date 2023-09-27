#include <bits/stdc++.h>
using namespace std;

int n, m;
int coins[25];
int dp[50100];
bool vis[50100];

int coinChange( int changeLeft )  {
    if (changeLeft == 0) return 0;
    if (changeLeft < 0) return 999999;

    if ( vis[changeLeft] ) return dp[changeLeft];
    vis[changeLeft] = 1;

    int res = 100000;
    for (int i = 0; i < m; ++i)
        res = min(res, coinChange( changeLeft - coins[i] ) + 1);
    
    return dp[changeLeft] = res;
}

int main() {    
    cin >> n >> m;
    for (int i = 0; i < m; ++i) cin >> coins[i];
    cout << coinChange( n ) << endl;
    return 0;
}


