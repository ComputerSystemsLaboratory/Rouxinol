#include <bits/stdc++.h>
using namespace std;

bool dp[20][2005];
int a[20];
int main()
{
    memset(dp,0,sizeof dp);
    for(int i=0;i<20;i++) dp[i][0] = 1;
    int n;cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    dp[n-1][a[n-1]]=1;
    for(int i=n-2;i>=0;i--){
        for(int j=a[i];j<=2000;j++){
            dp[i][j] = dp[i+1][j-a[i]] || dp[i+1][j];
        }
    }
    int m,x;cin>>m;
    for(int i=0;i<m;i++){
        cin>>x;
        if(dp[0][x]) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

