#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b,a||b){
        int dp[18][18]={},n,x,y,dx[2]={0,1},dy[2]={1,0};
        bool stage[18][18]={};
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            stage[y][x]=true;
        }
        dp[1][1]=1;
        for(int i=1;i<=b;i++){
            for(int j=1;j<=a;j++){
                //printf("%d ",dp[i][j]);
                for(int k=0;k<2;k++){
                    if(stage[i+dy[k]][j+dx[k]]) continue;
                    dp[i+dy[k]][j+dx[k]] += dp[i][j];
                }
            }
            //puts("");
        }
        printf("%d\n",dp[b][a]);
    }
    return 0;
}