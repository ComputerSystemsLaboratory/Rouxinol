#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
const int maxn=1000+10;
int n;
char a[maxn],b[maxn];
int dp[maxn][maxn];
void solve(char *a,char *b)
{

    int la=strlen(a)-1,lb=strlen(b)-1;
    for(int i=0;i<la;i++) dp[i][0]=0;
    for(int i=0;i<lb;i++) dp[0][i]=0;

    for(int i=0;i<la;i++)
    {
        for(int j=0;j<lb;j++)
        {
            if(a[i]==b[j]) dp[i+1][j+1]=dp[i][j]+1;
            else dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
        }

    }
    printf("%d\n",dp[la][lb]);

}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        fgets(a,sizeof(a),stdin);
        fgets(b,sizeof(b),stdin);
        solve(a,b);
    }

    return 0;
}