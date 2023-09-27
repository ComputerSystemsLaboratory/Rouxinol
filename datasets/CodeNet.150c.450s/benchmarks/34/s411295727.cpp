#include<bits/stdc++.h>
using namespace std;
int dp[31];
int solve(int d){
    if(dp[d] != -1)
        return dp[d];
    else
        return dp[d] = solve(d-1) + solve(d-2) + solve(d-3);
}

int main(){
    int n;
    for(int i = 0; i < 31; i++)
        dp[i] = -1;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    while(cin >> n,n){
        if(n == 1 || n == 2 || n == 3)
            cout << 1 << endl;
        else
            cout << solve(n) / 10 / 365 + 1 << endl;
    }
}