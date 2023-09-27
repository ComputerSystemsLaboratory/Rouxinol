#include <bits/stdc++.h>

using namespace std;

int n;
int dp[33];

int solve(int now){

    if(dp[now] != -1) return dp[now];

    if(now == n) return 1;
    else if(now > n) return 0;
    else {
        return dp[now] = solve(now + 1) + solve(now + 2) + solve(now + 3);
    }

}

int main(){

    while(cin >> n, n){

        memset(dp, -1, sizeof(dp));

        int pattern = (solve(0) - 1) / 3650 + 1;

        cout << pattern << endl;

    }

}