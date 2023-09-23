#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int dp[31];
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    while(cin >> n,n){
        if(n == 1 || n == 2 || n == 3)
            cout << 1 << endl;
        else{
            for(int i = 4; i <= n; i++)
                dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
            cout << dp[n] / 10 / 365 + 1 << endl;
        }
    }
}