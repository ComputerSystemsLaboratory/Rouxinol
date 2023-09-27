#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
using namespace std;

class node
{
    public:
      vector<int>rank,p;
      node(){}
      node(int size)
      {
          rank.resize(size,0);
          p.resize(size,0);
          for(int i=0;i<size;i++)
            makeset(i);
      }
      void makeset(int x)
      {
          p[x]=x;
          rank[x]=x;
      }

      bool same(int x,int y)
      {
          return findset(x)==findset(y);
      }

      void unite(int x,int y)
      {
          link(findset(x),findset(y));
      }

      int findset(int x)
      {
          if(x!=p[x])
          {
              p[x]=findset(p[x]);
          }
          return p[x];
      }

      void link(int x,int y)
      {
          if(rank[x]>rank[y])
          {
              p[y]=x;
          }
          else
          {
              p[x]=y;
              if(rank[x]==rank[y])
              {
                  rank[y]++;
              }
          }
      }
};

int main()
{
    int a,n,b,q,t;
    scanf("%d%d",&n,&q);
    node ds=node(n);

    for(int i=0;i<q;i++)
    {
        scanf("%d%d%d",&t,&a,&b);
        if(t==0) ds.unite(a,b);
        else if(t==1)
        {
            if(ds.same(a,b)) printf("1\n");
            else printf("0\n");
        }
    }
    return 0;
}