#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){
    while(1){
    int x,y,z,dp[50][50]={0};
    cin>>x>>y;
    if(x==0 && y==0)break;
    cin>>z;
    for(int i=0;i<z;++i){
        int xx,yy;
        cin>>xx>>yy;
        dp[xx][yy]=-1;
        }
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(dp[i][j]!=-1){
                int xxx,yyy;
                xxx=dp[i][j-1];
                yyy=dp[i-1][j];
                if(xxx==-1)dp[i][j]=yyy;
                else if(yyy==-1)dp[i][j]=xxx;
                else dp[i][j]=xxx+yyy;
                }
                if(i==1 && j==1)dp[i][j]=1;
            }
        }
    cout<<dp[x][y]<<endl;
    }
    return 0;
}