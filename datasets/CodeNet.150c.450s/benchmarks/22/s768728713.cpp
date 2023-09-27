#include<bits/stdc++.h>
#define INF 1000000001
using namespace std;

int main()
{
  int V,E,r;scanf("%d %d %d",&V,&E,&r);
  int s[E],t[E],d[E],dist[V];vector<vector<int>> G(V);
  for(int i=0;i<E;i++)
  {
    scanf("%d %d %d",&s[i],&t[i],&d[i]);
    G[s[i]].push_back(t[i]);
  }
  bool check[V];fill(check,check+V,false);
  queue<int> S;S.push(r);
  while(!S.empty())
  {
    int i=S.front();check[i]=true;S.pop();
    for(int k : G[i])
    {
      if(check[k])continue;
      S.push(k);
    }
  }
  fill(dist,dist+V,0);int k=-1;
  for(int i=0;i<V;i++)for(int j=0;j<E;j++)if(check[s[j]]&&dist[t[j]]>dist[s[j]]+d[j]){dist[t[j]]=dist[s[j]]+d[j],k=i;}
  if(k==V-1){printf("NEGATIVE CYCLE\n");return 0;}
  fill(dist,dist+V,INF);dist[r]=0;
  while(true)
  {
    bool update=false;
    for(int i=0;i<E;i++)if(dist[s[i]]!=INF&&dist[t[i]]>dist[s[i]]+d[i])dist[t[i]]=dist[s[i]]+d[i],update=true;
    if(!update)break;
  }
  for(int i=0;i<V;i++)if(dist[i]==INF)printf("INF\n");else printf("%d\n",dist[i]);
}
