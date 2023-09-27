#include <cstdio>
#include <algorithm>

using namespace std;

const int MAXN=1007;
char s1[MAXN];
char s2[MAXN];
int dp[MAXN][MAXN];


int main(){
    scanf("%s",s1+1);
    scanf("%s",s2+1);
    for(int i=1;s1[i];i++) dp[0][i]=i;
    for(int i=1;s2[i];i++) dp[i][0]=i;

    // puts(s1+1);
    // puts(s2+1);

    int i=1,j=1;
    for(;s2[i];i++){
        for(j=1;s1[j];j++){
            int temp=(s1[j]==s2[i]?dp[i-1][j-1]:dp[i-1][j-1]+1);
            dp[i][j]=min(min(temp,dp[i][j-1]+1),dp[i-1][j]+1);
        }
    }

    printf("%d\n",dp[i-1][j-1]);

    return 0;
}
