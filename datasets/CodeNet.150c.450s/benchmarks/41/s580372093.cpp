#include<bits/stdc++.h>
#define INF 200000000000 
using namespace std;

int main()
{
int V,E;scanf("%d %d",&V,&E);
vector<vector<long long>> G(V,vector<long long>(V,INF));
for(int i=0;i<V;i++)G[i][i]=0;
for(int i=0,s,t,d;i<E;i++)
{
  scanf("%d %d %d",&s,&t,&d);
  G[s][t]=d;
}
for(int k=0;k<V;k++)for(int i=0;i<V;i++)for(int j=0;j<V;j++)
{
  if(G[i][k]==INF||G[k][j]==INF)continue;
  G[i][j]=min(G[i][j],G[i][k]+G[k][j]);
}
for(int i=0;i<V;i++)if(G[i][i]<0){printf("NEGATIVE CYCLE\n");return 0;}
for(int i=0;i<V;i++)
{
  for(int j=0;j<V;j++)
  {
    if(G[i][j]>=INF)printf("INF");
    else printf("%d",G[i][j]);
    if(j<V-1)printf(" ");
  }
  printf("\n");
}
}
