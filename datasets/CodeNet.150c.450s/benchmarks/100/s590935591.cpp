#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)
long long dp[21];
int main(void){
    dp[0] = 1;
    for(int i=1; i<21; ++i) dp[i] = i*dp[i-1];
    int n;
    cin >> n;
    cout << dp[n] << endl;
}