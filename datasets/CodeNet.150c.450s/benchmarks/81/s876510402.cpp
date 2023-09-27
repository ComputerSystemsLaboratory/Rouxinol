#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
const int INF=999999;
const int maxx=11;
int ma[maxx][maxx];
 int n,m;

void init()
{
   for(int i=0;i<maxx;i++)
        for(int j=0;j<maxx;j++)
            if(i!=j)
            ma[i][j]=INF;

}

int main()
{




    while(~scanf("%d",&n)&&n)
    {
        init();
        m=0;
        for(int i=0;i<n;i++)
        {
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            ma[a][b]=ma[b][a]=c;
            m=max(m,max(a,b)+1);
        }



        for(int i=0;i<m;i++)
            for(int j=0;j<m;j++)
                for(int k=0;k<m;k++)
                    ma[j][k]=min(ma[j][k],ma[j][i]+ma[i][k]);



        int ans=INF;int k;
        for(int i=0;i<m;i++)
        {
            int sum=0;
            for(int j=0;j<m;j++)
                if(ma[i][j]!=INF)
                    sum+=ma[i][j];
            if(sum<ans)
            {
                k=i;
                ans=sum;
            }

        }


        printf("%d %d\n",k,ans);
    }
}