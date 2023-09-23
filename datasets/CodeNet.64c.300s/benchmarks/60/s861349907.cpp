#include<stdio.h>
int main(void)
{
    int N,schoolx,schooly;
    while(scanf("%d%d",&schoolx,&schooly),schoolx)
    {
        int a,o,bre[100][100]={{0}},i,j,find[100][100]={{0}};
        scanf("%d",&N);
        for(i=1;i<=N;i++)
        {
            scanf("%d%d",&a,&o);
            bre[a][o]=1;
        }
        find[1][1]=1;
        for(i=1;i<=schooly;i++)
        {
            for(j=1;j<=schoolx;j++)
            {
                if(i+j==2)continue;
                find[j][i]=find[j-1][i]+find[j][i-1];
                if(bre[j][i]==1)
                {
                    find[j][i]=0;
                }
            }
        }
        printf("%d\n",find[schoolx][schooly]);
    }
    return 0;
}