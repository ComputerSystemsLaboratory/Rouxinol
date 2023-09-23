#include<cstdio>
#include<iostream>
#include<sstream>
#include<cstdlib>
#include<cstring>
#include<string>
#include<climits>
#include<cmath>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
#include<set>
#include<map>
#include<fstream>
#include<iomanip>
#define pi 3.14159265358
using namespace std;
#define fout cout
#define fin cin
#define maxn 200000+10

#define clr(a) memset(a,0,sizeof(a))
int dist[100][100];
int jl[100][100];
int main()
{
    int n,u,v,d,i,j,k;
    int exist[100];
   while(cin>>n)
   {
       if(n==0) break;
       clr(exist);
       for(i=0;i<=30;i++)
        for(j=0;j<=30;j++)
       {
        jl[i][j]=dist[i][j]=9999999;
        if(i==j) jl[i][j]=dist[i][j]=0;
       }
       for(i=1;i<=n;i++)
       {

        scanf("%d%d%d",&u,&v,&d);
        exist[u]=exist[v]=1;
        dist[u][v]=dist[v][u]=d;
       }
       for(i=0;i<=10;i++)
        for(j=0;j<=10;j++)
        for(k=0;k<=10;k++)
       {

           dist[j][k]=min(dist[j][k],dist[j][i]+dist[i][k]);
       }
       int tot[100];
       clr(tot);
       for(i=0;i<=10;i++)
       {
           if(!exist[i]) continue;
           for(j=0;j<=10;j++)
           {
           if(!exist[j]) continue;

            tot[i]+=dist[i][j];
           }
       }
       int mi=-1;
       for(i=0;i<=10;i++)
       {
           if(tot[i]==0) continue;
           if(mi==-1) mi=i;
           if(tot[mi]>tot[i]) mi=i;
       }

      cout<<mi<<" "<<tot[mi]<<endl;
   }
}

