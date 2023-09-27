#include <iostream>
#include <climits>
#include <queue>

using namespace std;
static const int MAX=100;
static const int WHITE=1;
static const int GRAY=2;
static const int BLACK=3;

int n,M[MAX+10][MAX+10];

int prim()
{
    int u,minv;
    int d[MAX],p[MAX],color[MAX];

    for(int i=0;i<n;i++)
    {
      d[i]=INT_MAX;
      p[i]=-1;
      color[i]=WHITE;
    }

    d[0]=0;

    while(1)
    {
        minv=INT_MAX;
        u=-1;
        for(int i=0;i<n;i++)
        {
            if(minv>d[i]&&color[i]!=BLACK)
            {
                u=i;
                minv=d[i];
            }
        }
      if(u==-1) break;
      color[u]=BLACK;
      for(int v=0;v<n;v++)
      {
        if(color[v]!=BLACK && M[u][v]!=INT_MAX)
        {
            if(d[v]>M[u][v])
            {
                d[v]=M[u][v];
                p[v]=u;
                color[v]=GRAY;
            }
         }
      }
     }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(p[i]!=-1) sum+=M[i][p[i]];
    }

    return sum;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
    {
        int e;
        cin>>e;
        M[i][j]=(e==-1)? INT_MAX:e;
    }

    cout<<prim()<<endl;
    return 0;
}

