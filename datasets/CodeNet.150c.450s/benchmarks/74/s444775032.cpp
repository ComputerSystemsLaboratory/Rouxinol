#if 0



#endif // 0

#include<cstdlib>
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<set>
#include<cstring>
#include<cmath>
using namespace std;
const int MAXN = (int) 1e5 + 10;
const int INF = (int) 0x3f3f3f3f;
typedef long long LL;
int N,M;
int c[MAXN];
int dp[MAXN];

void work(){
    while(~scanf("%d%d",&N,&M)){
        memset(dp,INF,sizeof(dp));
        dp[0]=0;
        for(int i=1;i<=M;i++){
            scanf("%d",&c[i]);
            for(int j=c[i];j<=N;j++){
                dp[j]=min(dp[j],dp[j-c[i]]+1);
            }
        }
        printf("%d\n",dp[N]);
    }
}

int main(){
    work();
    return 0;
}

