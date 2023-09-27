#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int N,W,v,w,ans=0;
    scanf("%d %d",&N,&W);
    vector<int> dp(W+1);
    fill(dp.begin(), dp.end(), 0);
    for(int i=0;i<N;i++){
        scanf("%d %d",&v,&w);
        for(int j=W-w;j>0;j--){
            if(dp[j]!=0){
                dp[j+w]=max(dp[j+w],dp[j]+v);
            }
        }
        dp[w]=max(dp[w],v);
            
    }
    for(int i=0;i<W+1;i++){
        ans=max(ans,dp[i]);
    }
    printf("%d\n",ans);
    return 0;
}