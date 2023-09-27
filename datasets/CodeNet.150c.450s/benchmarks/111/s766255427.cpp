#include <iostream>
#include <vector>
#include <string.h>
#include <cstdio>
using namespace std;
#define rep(i, n) for( int i = 0; i < n; i++ )
typedef vector<int> vec;

int main(){
    int n;
    cin >> n;
    vec fml(n);
    rep(i, n){
        cin >> fml[i];
    }
    long long int dp[101][21];
    memset( dp, 0, sizeof(dp) );
    dp[1][fml[0]] = 1;
    rep(i, n-1){
        rep(j, 21){
            if( dp[i][j] > 0 ){
                int plus = j + fml[i];
                int minus = j - fml[i];
                if( plus <= 20 ) dp[i+1][plus] += dp[i][j];
                if( minus >= 0 ) dp[i+1][minus] += dp[i][j];
            }
        }
    }
    cout << dp[n-1][fml[n-1]] << endl;
}