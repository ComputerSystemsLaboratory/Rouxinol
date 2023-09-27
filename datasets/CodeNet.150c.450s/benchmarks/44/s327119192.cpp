#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int a[15],b[5],c[5],i,j,hit,blow;
    while(scanf("%d%d%d%d",&b[1],&b[2],&b[3],&b[4])!=EOF)
    {
        hit=blow=0;
        memset(a,0,sizeof(a));
        scanf("%d%d%d%d",&c[1],&c[2],&c[3],&c[4]);
        for(i=1;i<=4;i++)
        {
            a[b[i]]++;
            a[c[i]]++;
            if(b[i]==c[i]){hit++;a[b[i]]=0;}
        }
        for(i=0;i<=9;i++)
        {
            if(a[i]==2)
            {
                blow++;
            }
        }
        printf("%d %d\n",hit,blow);
    }
    return 0;
}