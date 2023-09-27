#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int n;
int a[101];
long long dp[101][21];

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    memset(dp,0,sizeof(dp));
    dp[0][a[0]]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<=20;j++){
            if(j+a[i]<=20) dp[i][j] += dp[i-1][j+a[i]];
            if(j-a[i]>=0) dp[i][j] += dp[i-1][j-a[i]];
        }
    }
    cout << dp[n-2][a[n-1]] << endl;
    return 0;
}