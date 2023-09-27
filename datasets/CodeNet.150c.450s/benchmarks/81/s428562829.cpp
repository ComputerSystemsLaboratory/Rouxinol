
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned ll
#define db double
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PII pair<int, int>

const int N=15;
int dp[N][N];
int m,a,b,c;

int main()
{
    while (true) {
        scanf("%d",&m);
        if (m==0) break;
        memset(dp,INF,sizeof(dp));
        for (int i=1;i<=m;i++) {
            scanf("%d%d%d",&a,&b,&c);
            dp[a][b]=dp[b][a]=c;
        }
        for (int k=0;k<10;k++) {
            for (int i=0;i<10;i++) {
                for (int j=0;j<10;j++) {
                    if (k!=i&&k!=j&&i!=j) {
                        if (dp[i][k]!=INF&&dp[k][j]!=INF)
                            dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
                    }
                }
            }
        }
        int val=INF,idx=-1;
        for (int i=0;i<10;i++) {
            int tmp=0;
            for (int j=0;j<10;j++) {
                if (dp[i][j]!=INF) tmp+=dp[i][j];
            }
            if (tmp>0) {
                if (tmp<val) {
                    idx=i;
                    val=tmp;
                }
            }
        }
        printf("%d %d\n",idx,val);
    }
}
