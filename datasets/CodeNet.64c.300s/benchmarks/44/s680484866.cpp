#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<iostream>
#include<string.h>
#include<cstring>
const long long INF=0x3f3f3f3f;
using namespace std;
long long ans;
long long n;
int  e[1001][1001];
//int ee[1001][1001];
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        int sum=0;
        int ssum=INF;
      //  int min=INF;
        int u,v,r;
        int falg;
        memset(e,INF,sizeof(e));
        int Max=0;
        for(int i=0;i<n;i++)
        {
            cin>>u>>v>>r;
            if(e[u][v]>r)
            e[u][v]=r;
            e[v][u]=r;
           Max=max(Max,max(u,v));
        }
        for(int i=0;i<=Max;i++)
        {
            e[i][i]=0;
        }

        for(int i=0;i<=Max;i++)
        {
            for(int j=0;j<=Max;j++)
            {
               for(int k=0;k<=Max;k++)
                if(e[k][i]>e[k][j]+e[j][i])
                {
                   //  sum+=ee[1][i];
                    e[k][i]=e[k][j]+e[j][i];
                    e[i][k]=e[k][j]+e[j][i];
                }
            }
        }
          for(int i=0;i<=Max;i++)
        {
            sum=0;
            for(int j=0;j<=Max;j++)
            {
            if(e[i][j]!=INF)
            sum+=e[i][j];
            }

            if(sum<ssum)
            {
                ssum=sum;
                falg=i;
            }
        }

        cout<<falg<<" "<<ssum<<endl;
    }
    return 0;
}