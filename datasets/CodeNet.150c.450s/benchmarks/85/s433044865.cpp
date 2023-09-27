#include<bits/stdc++.h>
#define ll long long
using namespace std;

static const int N=100;
int dp[N+1][N+1];
int p[N+1];
int main(){
    int n;
    cin>>n;
    int h,w;//h:num of gyo,w:num of retu
    for(int i=1;i<=n;i++){
        cin>>p[i-1]>>p[i];
    }
    for(int i=1;i<=n;i++){
        dp[i][i]=0;
    }
    for(int l=2;l<=n;l++){
        for(int i=1;i<=n-l+1;i++){
            int j=l+i-1;
            dp[i][j]=(1<<21);
        for(int k=i;k<=j-1;k++){
            dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j]);
        
        }
        }
        
    }
    cout<<dp[1][n]<<endl;
    return 0;
}
