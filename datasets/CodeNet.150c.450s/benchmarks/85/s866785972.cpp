#include <bits/stdc++.h>
using namespace std;

long long dp[105][105];
pair<int,int> p[105];

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) dp[i][j]=2e9;
    for(int i=0;i<n;i++) {cin>>p[i].first>>p[i].second;dp[i][i]=0;}
    for(int i=0;i < n;i++){
        for(int j=i;j < n;j++){
            for(int k=i;k<j;k++){
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k+1][j]+p[i].first*p[k].second*p[j].second);
            }
        }
    }
    for(int i=0;i < n;i++){
        for(int j=i;j < n;j++){
            for(int k=i;k<j;k++){
                dp[i][j] = min(dp[i][j],dp[i][k]+dp[k+1][j]+p[i].first*p[k].second*p[j].second);
            }
        }
    }
    cout<<dp[0][n-1]<<endl;
    return 0;
}

