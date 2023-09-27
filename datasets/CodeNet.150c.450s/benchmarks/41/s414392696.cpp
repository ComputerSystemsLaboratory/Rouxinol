#include<stdio.h>
#include<algorithm>
using namespace std;
long long G[100+10][100+10];
int n;
long long nil=4294967296;
void floy()
{
    for ( int k=0;k<n;k++){
        for (int i=0;i<n;i++){
            if(G[i][k]==nil) continue;//找指向?点K的?;
            for (int j=0;j<n;j++){
                if(G[k][j]==nil) continue;//找k指向的?点；
                {
                    G[i][j]=min(G[i][j],G[i][k]+G[k][j]);
                }
            }
        }
    }
}
int main()
{
    int e,a,b,c;
    scanf("%d%d",&n,&e);
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
    {
        G[i][j]=((i==j)?0:nil);//将?角????0
    }
    for (int i=0;i<e;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        G[a][b]=c;
    }
    floy();
    bool zhi=false;
    for (int i=0;i<n;i++)
    {
        if(G[i][i]<0)
           {
               zhi=true;
               break;
           }
    }//?自身??数的串???；
    if(zhi==true) printf("NEGATIVE CYCLE\n");
    else {
        for (int i=0;i<n;i++)
        { for (int j=0;j<n;j++){
            if(j!=0) printf(" ");
            if(G[i][j]==nil) printf("INF");
           else printf("%d",G[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}