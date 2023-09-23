#include<iostream>
using namespace std;
int main(){
    long long int dp[99][21];
    for(int i=0;i<99;i++)for(int j=0;j<21;j++)dp[i][j]=0;
    int P[100],N;
    cin>>N;
    for(int i=0;i<N;i++)cin>>P[i];
    dp[0][P[0]]=1;
    for(int i=1;i<N-1;i++){
        for(int j=0;j<=20;j++){
            if(j+P[i]<=20)dp[i][j+P[i]]+=dp[i-1][j];
            if(j-P[i]>=0)dp[i][j-P[i]]+=dp[i-1][j];
        }
    }
    cout<<dp[N-2][P[N-1]]<<endl;

    return 0;
}