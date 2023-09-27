#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<map>
#include<queue>
#include<cmath>
#include<stack>
#include<vector>
#include<cstdio>
#define MAXN 2555
#define INF 0x3f3f3f3f
#define v first
#define b second
using namespace std;
int fp[15][15];
int m;
void floyd()
{
   for(int i=0;i<m;i++)
      for(int j=0;j<m;j++)
      for(int k=0;k<m;k++)
   {
      fp[j][k]=min(fp[j][k],fp[j][i]+fp[i][k]);
   }
}
int main()
{
   int n;
   while(scanf("%d",&n),n)
   {
      m=0;
      memset(fp,INF,sizeof(fp));
      for(int i=0;i<n;i++)
      {
         int a,b,c;
         scanf("%d%d%d",&a,&b,&c);
         fp[a][b]=fp[b][a]=c;
         m=max(m,max(a,b)+1);
      }
      for(int i=0;i<m;i++)
         fp[i][i]=0;
      floyd();
      int ans,sum=INF;
      for(int i=0;i<m;i++)
      {
         int res=0;
         for(int j=0;j<m;j++)
         {
            res+=fp[i][j];
         }
         if(res<sum)
         {
            sum=res;
            ans=i;
         }
      }
      cout<<ans<<" "<<sum<<endl;
   }
}