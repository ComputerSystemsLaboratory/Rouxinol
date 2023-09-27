#include<bits/stdc++.h>
using namespace std;
bool solve(){
    int W,H,N;
    bool fix[16][16]={{0}};
    cin>>W>>H;
    if(W==0&&H==0)return false;
    cin>>N;
    while(N--){
        int x,y;
        cin>>x>>y;
        fix[--y][--x]=true;
    }

    int dp[17][17]={{0}};
    dp[1][1]=1;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(fix[i][j])continue;
            dp[i+1][j+1]+=dp[i][j+1]+dp[i+1][j];
        }
    }
    cout<<dp[H][W]<<endl;
    return true;
}
int main(){
    while(solve());
    return 0;
}