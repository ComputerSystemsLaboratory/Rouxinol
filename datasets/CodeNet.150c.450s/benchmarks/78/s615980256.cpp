#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int dp[2][1000001];
const int INF=1e9;
int main(){
    vector<int>S;
    for(int i=1;true;i++){
        int val=i*(i+1)*(i+2)/6;
        if(val<=1000000)S.push_back(val);
        else break;
    }
    fill_n(*dp,2*1000001,INF);
    dp[0][0]=dp[1][0]=0;
    for(int i=1;i<=1000000;i++){
        for(int j=0;j<S.size();j++){
            int val=S[j];
            if(i-val<0)continue;
            dp[0][i]=min(dp[0][i],dp[0][i-val]+1);
            if(val&1)dp[1][i]=min(dp[1][i],dp[1][i-val]+1);
        }
    }
    int n;
    while(scanf("%d",&n),n){
        printf("%d %d\n",dp[0][n],dp[1][n]);
    }
    return 0;
}