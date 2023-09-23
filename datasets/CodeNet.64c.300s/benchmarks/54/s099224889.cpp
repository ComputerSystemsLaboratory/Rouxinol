#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF=1e9;
int n;
int a[101];
int dp[101][21];
signed main() {
    cin>>n;
    for(int i=0; i<n; i++) cin>>a[i];
    dp[0][a[0]]=1;
    for(int i=0; i<n-2; i++) {
        for(int j=0;j<21;j++) {
            if(0<=j+a[i+1] && j+a[i+1]<=20) dp[i+1][j+a[i+1]]+=dp[i][j];
            if(0<=j-a[i+1] && j-a[i+1]<=20) dp[i+1][j-a[i+1]]+=dp[i][j];
        }
    }
    cout<<dp[n-2][a[n-1]]<<endl;
    return 0;
}