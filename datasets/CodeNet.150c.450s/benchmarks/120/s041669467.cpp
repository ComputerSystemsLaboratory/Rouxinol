#include<cstdio>
#include<algorithm>
#include<bitset>
using namespace std;
bitset<10005>cookie[10];
int main()
{
    int m,n,t,res,ans,temp;
    scanf("%d%d",&n,&m);
    while(m||n)
    {
        res=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
        {
            scanf("%d",&temp);
            cookie[i][j]=temp;
        }
        for(int i=0;i<1<<n;i++)
        {
            t=0;
            for(int j=0;j<n;j++)
                if(i>>j&1)
                cookie[j].flip();
            for(int j=0;j<m;j++)
            {
                ans=0;
                for(int k=0;k<n;k++)
                    if(cookie[k][j])
                    ans++;
                t+=max(ans,n-ans);
            }
            res=max(res,t);
            for(int j=0;j<n;j++)
                if(i>>j&1)
                cookie[j].flip();
        }
        printf("%d\n",res);
        scanf("%d%d",&n,&m);
    }
    return 0;
}