#include<bits/stdc++.h>
//#pragma GCC optimize("O3")
//#pragma GCC target ("sse4")
using namespace std;
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define MEM(x,a) memset((x),a,sizeof((x)))
#define F first
#define S second
#define imx INT_MAX
const long long MOD = (long long)(1e9+7);
const long long MMX = (long long)(1e18);
typedef long long LL;
typedef pair<int,int> pii;
LL c[30],ans,x[370][30],n,ls[30],k;
int main()
{
    scanf("%lld",&n);
    for(int i=1;i<=26;i++)scanf("%lld",&c[i]);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=26;j++)scanf("%lld",&x[i][j]);
    }
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&k);
        ans+=x[i][k];
        ls[k]=i;
        for(int j=1;j<=26;j++)ans-=c[j]*(i-ls[j]);
        printf("%lld\n",ans);
    }
}
