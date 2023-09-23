/*
#1140935 Solution for 0515: School Road by ryogo
Source Code Status Test Cases     Policy: public     Reviewed: 59    
*/
#include<iostream>
 
using namespace std;
 
int dp[20][20];
 
int main(){
    int a,b;
    while(cin>>a>>b && a&&b){
        int n;
        cin>>n;
        for(int i=0;i<20;i++)for(int j=0;j<20;j++)dp[i][j]=0;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            dp[y][x]=-1;
        }
        dp[1][1]=1;
        for(int i=1;i<=b;i++){
            for(int j=1;j<=a;j++){
                if(i==1 && j==1)continue;
                if(dp[i][j]!=-1){
                    dp[i][j]=dp[i][j-1]+dp[i-1][j];
                }
                else dp[i][j]=0;
            }
        }
 
        cout<<dp[b][a]<<endl;
    }
}
