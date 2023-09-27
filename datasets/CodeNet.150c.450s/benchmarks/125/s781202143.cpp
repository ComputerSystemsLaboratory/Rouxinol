#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int n,u,k,p,d[105],f[105],tt=0;
bool adm[105][105],se[105];

void makemap()
{
    memset(adm,false,sizeof(adm));
    memset(se,true,sizeof(se));
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&u,&k);
        while(k--)
        {
            scanf("%d",&p);
            adm[u][p]=true;
        }
    }
}

void dfs(int p)
{
    d[p]=++tt;
    se[p]=false;
    for(int i=1;i<=n;i++)
        if(adm[p][i]&&se[i])dfs(i);
    f[p]=++tt;
}

int main()
{
    makemap();
    for(int i=1;i<=n;i++)if(se[i])dfs(i);
    for(int i=1;i<=n;i++)printf("%d %d %d\n",i,d[i],f[i]);
    return 0;
}
