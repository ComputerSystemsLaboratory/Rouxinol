#include <iostream>
#include <climits>
using namespace std;
#define MAX 100
static const int WHITE=0;
static const int GRAY=1;
static const int BLACK=2;

int n,d[MAX+10],p[MAX+10],color[MAX+10];
int W[MAX+10][MAX+10];

int prim()
{
  int v,k,mini,flag,u=0;
  for(int i=0;i<n;i++)
  {
      d[i]=INT_MAX;
      p[i]=-1;
  }
  d[0]=0;
  while(1)
  {
      mini=INT_MAX;
      flag=1;
      for(int i=0;i<n;i++)
      {
          if(d[i]<mini&&color[i]!=BLACK)
          {
              u=i;
              mini=d[i];
              flag=0;
          }
      }
      if(flag) break;
      color[u]=BLACK;
      for(v=0;v<n;v++)
      {
          if(W[u][v]!=INT_MAX&&color[v]!=BLACK)
          {
            if(d[v]>W[u][v])
            {
              d[v]=W[u][v];//更新当前点到最小生成树的距离
              p[v]=u;//每一轮都需要跑更新前驱结点
            }
          }
      }
  }
  int sum=0;
  for(int i=0;i<n;i++)
  {
      if(p[i]!=-1) sum+=W[i][p[i]];
  }
  return sum;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
         int e;
         cin>>e;
         W[i][j]=(e==-1)?INT_MAX:e;
        }
        color[i]=WHITE;
    }
    cout<<prim()<<endl;
}

