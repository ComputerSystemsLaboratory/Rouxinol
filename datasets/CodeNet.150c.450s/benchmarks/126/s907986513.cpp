#include<cstdio>
#include<iostream>
#define MAX_N 10000000;

using namespace std;

long long int dp[20][20];
int w,h;

int main(){
    while(1){
        
        for(int i=0;i<20;i++){
            for(int j=0;j<20;++j){
                dp[i][j]=0;
            }
        }
        
        dp[1][1]=1;
        cin>>w>>h;
        int n,x,y;
        if(w==0&&h==0)break;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            dp[x][y]=-1;
        }
        for(int i=1;i<=w;++i){
            for(int j=1;j<=h;++j){
                if(dp[i][j]!=-1){
                if(dp[i+1][j]!=-1)
                    dp[i+1][j]+=dp[i][j];
                if(dp[i][j+1]!=-1)
                    dp[i][j+1]+=dp[i][j];
                }
            }
        }
        cout<<dp[w][h]<<endl;
    }
    return 0;
}