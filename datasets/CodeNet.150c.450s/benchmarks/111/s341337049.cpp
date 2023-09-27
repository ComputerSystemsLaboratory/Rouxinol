#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int dp[120][30]={0},num[110]={0},n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    dp[0][num[0]]=1;
    for(int i=1;i<n-1;i++){
        for(int j=0;j<=20;j++){
            if(dp[i-1][j]>0){
                int sum=j+num[i];
                if(sum<=20)dp[i][sum]+=dp[i-1][j];
                sum=j-num[i];
                if(sum>=0)dp[i][sum]+=dp[i-1][j];
            }
        }
    }
    cout<<dp[n-2][num[n-1]]<<endl;
    return 0;
}