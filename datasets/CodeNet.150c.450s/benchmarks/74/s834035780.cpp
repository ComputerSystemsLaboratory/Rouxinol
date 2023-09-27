#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,m;
    long long a[21];
    cin >>m>>n;
    long long dp[n][m+1];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=0;i<m+1;i++){
        dp[0][i]=i;
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<m+1;j++){
            if(j<a[i]){
                dp[i][j]=dp[i-1][j];
            }
        else{
            dp[i][j]=fmin(dp[i-1][j],dp[i][j-a[i]]+1);
        }
        }
    }

    cout<<dp[n-1][m]<<endl;
}

