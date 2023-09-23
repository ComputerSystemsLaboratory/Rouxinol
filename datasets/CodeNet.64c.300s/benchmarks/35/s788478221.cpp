#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int e[105][105];
int main()
{
    int n;
    int k,m,p;
    memset(e,0,sizeof(e));
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&k);
        scanf("%d",&m);
        for(int j=1;j<=m;j++)
        {
            scanf("%d",&p);
            e[k][p] = 1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j != n)
                printf("%d ",e[i][j]);
            else
                printf("%d",e[i][j]);
        }

        printf("\n");
    }
    return 0;

}