#include <cstdio>
#include <sstream>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
int n,u,k,p;
bool adm[105][105];
int main()
{
    memset(adm,false,sizeof(adm));
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
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)printf("%d%c",adm[i][j]?1:0,j==n?'\n':' ');
    return 0;
}
