#include <stdio.h>
#include <iostream>
#include <algorithm>

#define rep(index,from,to) for(int index=from;index<to;index++)

using namespace std;

int main(){
    int n,m;
    int c[25];
    int dp[50010];
    cin>>n>>m;
    rep(i,0,m) cin>>c[i];
    sort(c,c+m);
    rep(j,0,n+1) dp[j]=j;
    rep(i,1,m){
        rep(j,0,n+1-c[i]){
            dp[j+c[i]]=min(dp[j+c[i]],dp[j]+1);
        }
    }
    
    cout<<dp[n]<<endl;
    return 0;
}