#include<stdio.h>

#define UNION_FIND_MAX_N (100010)
int union_find_par[UNION_FIND_MAX_N];
int union_find_rank[UNION_FIND_MAX_N];

void init(int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      union_find_par[i]=i;
      union_find_rank[i]=0;
    }
}

int find(int x)
{
  if(union_find_par[x]==x)
    return x;
  else
    return union_find_par[x]=find(union_find_par[x]);
}

void unite(int x,int y)
{
  x=find(x);
  y=find(y);
  if(x==y)
    return;
  if(union_find_rank[x]<union_find_rank[y])
    union_find_par[x]=y;
  else
    union_find_par[y]=x;
  if(union_find_rank[x]==union_find_rank[y])
    union_find_rank[x]++;
}

int same(int x,int y)
{
  return find(x)==find(y);
}

int main()
{
  int n,m;
  int i;
  int a,b;
  int q;
  int s,t;
  scanf("%d %d",&n,&m);
  init(n);
  for(i=0;i<m;i++)
    {
      scanf("%d %d",&a,&b);
      unite(a,b);
    }
  scanf("%d",&q);
  for(i=0;i<q;i++)
    {
      scanf("%d %d",&s,&t);
      same(s,t)?puts("yes"):puts("no");
    }
  
  return 0;
}