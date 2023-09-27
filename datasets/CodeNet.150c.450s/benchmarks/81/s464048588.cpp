#include<stdio.h>
#include<iostream>
#define INF 10000005
using namespace std;
int a[20][20];
int n;
int dis[20];
int Dij(int v0)
{
    //cout<<"   "<<v0<<endl;
    bool s[20];
    for(int i=0;i<=n;i++)
    {
        dis[i]=a[v0][i];s[i]=false;
    }
    dis[v0]=0;s[v0]=1;
    for(int i=1;i<=n;i++)
    {
        int mmin=INF;int u=v0;
        for(int j=0;j<=n;j++)
            if(!s[j]&&dis[j]<mmin){u=j;mmin=dis[j];}
        s[u]=1;
        for(int j=0;j<=n;j++){
            if(!s[j]&&a[u][j]<INF)
                if(dis[j]>dis[u]+a[u][j]){dis[j]=dis[u]+a[u][j];}
            //cout<<dis[j]<<endl;
        }
    }
    int sum=0;
    for(int i=0;i<=n;i++)
        sum+=dis[i];
    return sum;

}
int main()
{
    while(1)
    {
        int m;n=0;
        scanf("%d",&m);if(m==0)break;
        for(int i=0;i<20;i++)
            for(int j=0;j<20;j++)
                a[i][j]=INF;
        for(int i=0;i<m;i++)
        {
            int p,q,r;scanf("%d%d%d",&p,&q,&r);
            a[p][q]=r;a[q][p]=r;
            n=max(n,p);n=max(n,q);
        }
        int mmin=INF,p;
        //cout<<n<<endl;
        for(int i=0;i<=n;i++)
        {
            int x=Dij(i);//cout<<x<<endl;
            if(x<mmin){mmin=x;p=i;}
        }
        printf("%d %d\n",p,mmin);
    }
}

