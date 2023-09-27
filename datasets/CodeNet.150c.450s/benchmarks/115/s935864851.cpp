#include<bits/stdc++.h>
#define REP(i,n) for(long long i=0;i<n;++i)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
using namespace std;
int main(){
    int q;
    scanf("%d",&q);
    string x,y;
    REP(i,q){
        cin>>x>>y;
        int dp[x.size()+1][y.size()+1];
        fill(dp[0],dp[x.size()],-1);
        REP(j,x.size()+1) dp[j][0]=0;
        REP(j,y.size()+1) dp[0][j]=0;
        FOR(j,1,x.size()+1){
            FOR(k,1,y.size()+1){
                if(x[j-1]==y[k-1]) dp[j][k]=dp[j-1][k-1]+1;
                else dp[j][k]=max(dp[j][k-1],dp[j-1][k]);
            }
        }
        printf("%d\n",dp[x.size()][y.size()]);
    }
    return 0;
}


