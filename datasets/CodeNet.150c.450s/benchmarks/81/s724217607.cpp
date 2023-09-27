/*#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <queue>
#include <stack>
#include <map>
#include <vector>
#include <set>
#include <utility>
#define ll long long
const int inf=0x3f3f3f3f;
const int mod=1e6;
using namespace std;

ll a[1005];
int n;
void get_table()
{
    memset(a,0,sizeof(a));
    a[0]=a[1]=1;
    for(int i=2;i<=1000;i++)
    {
        int mid=i/2;
        for(int j=0;j<mid;j++)
            a[i]+=a[j]*a[i-1-j]*2;
        if(i&1) a[i]+=a[mid]*a[mid];
        a[i]%=(ll)mod;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    get_table();
    while(scanf("%d",&n)&&n)
        printf("%lld\n",a[n]);
    return 0;
}
*/
#include <iostream>
#include <cstdio>
using namespace std;
const int maxn=100;
const int INF=999999999;
int M[maxn][maxn];
void floyd(int n)
{
    for (int l=0;l<=n;l++)
    for (int k=0;k<=n;k++)
    for (int r=0;r<=n;r++)
    if (M[k][l]+M[l][r]<M[k][r])
    M[k][r]=M[k][l]+M[l][r];
}
int main()
{
    int m,a,b,num;
    while (scanf("%d",&m),m)
    {
        for (int i=0;i<=12;i++)
        for (int j=0;j<=12;j++)
        if (i!=j)
        M[i][j]=INF;
        else M[i][j]=0;
        int n=0;
        while (m--)
        {
            scanf("%d%d%d",&a,&b,&num);
            M[a][b]=min(num,M[a][b]);
            M[b][a]=M[a][b];
            n=max(n,max(a,b));
        }
        floyd(n);
        int pos,ans=INF;
        for (int i=0;i<=n;i++)
        {
            int sum=0;
            for (int j=0;j<=n;j++)if (i!=j)
                sum+=M[i][j];
            if (ans>sum)
            {
                ans=sum;
                pos=i;
            }
        }
        printf("%d %d\n",pos,ans);
    }
    return 0;
}