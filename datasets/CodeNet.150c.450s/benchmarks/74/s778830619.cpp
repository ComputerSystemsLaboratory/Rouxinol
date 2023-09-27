#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int> ar(m);
    for(auto&e:ar){
        scanf("%d",&e);
    }
    int INF=1<<28, MAX_N=50010;
    int dp[MAX_N];
    fill(dp, dp+MAX_N, INF);
    dp[n]=0;
    for(int i=n;i>0;i--){
        for(int j=0;j<m;j++){
            dp[i-ar[j]]=min(dp[i]+1,dp[i-ar[j]]);
        }
    }
    printf("%d\n",dp[0]);
    return 0;
}