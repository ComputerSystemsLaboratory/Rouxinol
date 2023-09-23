#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<cmath>
#include<set>
#include<bitset>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<utility>
#define INF 1000000007
#define inf 100000000000000000
using namespace std;
typedef long long ll;
typedef pair<int,int>P;
int n,t,d[15][15],cost,x,y,k,i,j;
int main()
{
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        memset(d,INF,sizeof(d));t=0;
        P mi;mi.second=INF;
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&x,&y,&cost);
            d[x][y]=d[y][x]=cost;
            t=max(t,max(x,y));
        }
        for(i=0;i<=t;i++)d[i][i]=0;
        for(k=0;k<=t;k++)
        {
            for(i=0;i<=t;i++)
            {
                for(j=0;j<=t;j++)d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
        for(i=0;i<=t;i++)
        {
            P p;p.first=i;p.second=0;
            for(j=0;j<=t;j++)
            {
                if(i==j)continue;
                p.second+=d[i][j];
            }
            if(mi.second>p.second)mi=p;
        }
        printf("%d %d\n",mi.first,mi.second);
    }
    return 0;
}