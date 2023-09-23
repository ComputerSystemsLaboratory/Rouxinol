#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<string>
#include<iostream>
#include<stack>
#include<queue>
#include<map>
#define pi 3.1415926
#define INF 0x3f3f3f3f
using namespace std;
int Map[50][50];
int vis[15];
int main()
{
   int n;
   while(~scanf("%d",&n))
   {
       if(n==0)
        break;
        memset(vis,0,sizeof(vis));
       for(int i=0;i<=9;i++)
        for(int j=0;j<=9;j++)
        {
        if(i==j)
        Map[i][j]=0;
        else
        Map[i][j]=INF;
        }
//       for(int i=0;i<=9;i++)
//       {
//        for(int j=0;j<=9;j++)
//        printf("%d ",Map[i][j]);
//       printf("\n");
//
//       }
       for(int i=1;i<=n;i++)
       {
           int u,v,ti;
           scanf("%d%d%d",&u,&v,&ti);
           Map[u][v]=Map[v][u]=ti;
           vis[u]=vis[v]=1;
       }
       for(int k=0;k<=9;k++)
        for(int i=0;i<=9;i++)
        for(int j=0;j<=9;j++)
        {
           if(vis[i]&&vis[j]&&vis[k]&&Map[i][j]>Map[i][k]+Map[k][j])
            Map[i][j]=Map[i][k]+Map[k][j];
        }
       int ans=INF,r;
       for(int i=0;i<=9;i++)
       {
           int t=0;
           if(vis[i])
           for(int j=0;j<=9;j++)
           {
             if(vis[j])
               t+=Map[i][j];
           }
           if(t<ans&&t)
           {
               r=i;
              ans=t;
           }
       }
       printf("%d %d\n",r,ans);
   }
}