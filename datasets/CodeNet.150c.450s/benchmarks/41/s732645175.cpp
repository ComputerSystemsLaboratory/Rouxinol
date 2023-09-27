#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll INF=1e18+10;
const ll N=1e2+10;

ll d[N][N];
ll V,E;

void init()
{
    for(ll i=0;i<V;i++)
    {
        for(ll j=0;j<V;j++)
        {
            d[i][j]=INF;
            if(i==j) d[i][j]=0;
        }
    }
}

bool Floyd()
{
    for(ll k=0;k<V;k++)
    {
        for(ll i=0;i<V;i++)
        {
            for(ll j=0;j<V;j++)
            {
                if(d[i][j]>d[i][k]+d[k][j]&&d[i][k]!=INF&&d[k][j]!=INF)
                {
                    d[i][j]=d[i][k]+d[k][j];
                }
                if(i==j&&d[i][j]<0) return true;
            }
        }
    }
    return false;
}

int main()
{
    while(scanf("%lld %lld",&V,&E)!=EOF)
    {
        ll s,t,c;
        init();
        for(ll i=0;i<E;i++)
        {
            scanf("%lld %lld %lld",&s,&t,&c);
            d[s][t]=c;
        }
        if(Floyd())
        {
            puts("NEGATIVE CYCLE");
            continue;
        }
        for(ll i=0;i<V;i++)
        {
            for(ll j=0;j<V;j++)
            {
                if(j)
                {
                    printf(" ");
                }
                if(d[i][j]==INF)
                {
                    printf("INF");
                }else
                {
                    printf("%lld",d[i][j]);
                }
            }
            printf("\n");
        }
    }
}

