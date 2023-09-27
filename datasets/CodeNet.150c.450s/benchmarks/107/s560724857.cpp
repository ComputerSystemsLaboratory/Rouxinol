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
const int MAXN = (int) 1e3 + 10;
const int INF = (int) 0x3f3f3f3f;
typedef long long LL;

char s1[MAXN],s2[MAXN];
int dp[MAXN][MAXN];

void work(){
    scanf("%s%s",s1+1,s2+1);
    memset(dp,INF,sizeof(dp));
    int len1=strlen(s1+1);
    int len2=strlen(s2+1);
    for(int i=0;i<=len1;i++) dp[i][0]=i;
    for(int i=1;i<=len2;i++) dp[0][i]=i;
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            if(s1[i]==s2[j]) dp[i][j]=min(dp[i][j],dp[i-1][j-1]);
            else dp[i][j]=min(dp[i][j],dp[i-1][j-1]+1);
            dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
            dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
        }
    }
    printf("%d\n",dp[len1][len2]);
}

int main(){
#ifdef NNever
//    freopen("data.in","r",stdin);
//    freopen("out.txt","w",stdout);
#endif // NNever
    work();
    return 0;
}






