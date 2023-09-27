#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;
const int maxn=100+10;
int n;
int g[maxn][maxn];
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d",&n);
    int no,cnt,dd;
    memset(g,0,sizeof(g));
   for(int i=0;i<n;i++)
    {
        scanf("%d%d",&no,&cnt);
        for(int j=0;j<cnt;j++)
        {
            scanf("%d",&dd);
            g[no-1][dd-1]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j) printf(" ");
            printf("%d",g[i][j]);
        }
        printf("\n");
    }

    return 0;
}