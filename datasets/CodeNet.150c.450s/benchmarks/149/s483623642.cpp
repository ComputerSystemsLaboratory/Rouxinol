#include<stdio.h>
#include<vector>
using namespace std;
struct my
{
    vector<int>high,p;
    void make(int x)
    {
        high.resize(x,0);
        p.resize(x,0);
        for (int i=0;i<x;i++)
        {
            high[i]=0;
            p[i]=i;
        }
    }
    void unite(int x,int y)
    {
        link(findside(x),findside(y));
    }
    bool same(int x,int y)
    {
        return findside(x)==findside(y);
    }
    void link(int x,int y)
    {
        if(high[x]>high[y])
        {
            p[y]=x;
        }
        else {
           p[x]=y;
           if(high[x]==high[y])
                high[y]++;
        }
    }
    int findside(int x)
    {
        if(x!=p[x])
        {
            p[x]=findside(p[x]);
        }
        return p[x];
    }
};
int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    my ds;
    ds.make(n);
    int s,biao,c;
    for(int i=1;i<=q;i++)
    {
        scanf("%d%d%d",&biao,&s,&c);
        if(biao==0) ds.unite(s,c);
        else {
            if(ds.same(s,c)) printf("1\n");
            else printf("0\n");
        }
    }
    return 0;
}