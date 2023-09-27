#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
using namespace std;

class DisjointSet{
public :
    vector<int> rank,p;
    DisjointSet(){}
    DisjointSet(int size)
    {
        rank.resize(size,0);
        p.resize(size,0);
        for(int i=0;i<size;i++)
            makeSet(i);
    }
    void makeSet(int x)
    {
        p[x] = x;
        rank[x] = 0;
    }
    bool same(int x,int y)
    {
        return findSet(x) == findSet(y);
    }
    void unite(int x,int y)
    {
        link(findSet(x),findSet(y));
    }
    void link(int x,int y)
    {
        if(rank[x] > rank[y])
        {
            p[y] = x;
        }
        else
        {
            p[x] = y;
            if(rank[x] == rank[y])
                rank[y]++;
        }
    }
    int findSet(int x)
    {
        if(x!=p[x])
            p[x] = findSet(p[x]);
        return p[x];
    }
};
int main()
{
    int m,n;
    int t,a,b;
    scanf("%d%d",&m,&n);
    DisjointSet ds = DisjointSet(m);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d",&t,&a,&b);
        if(t == 0)
            ds.unite(a,b);
        else
        {
            if(ds.same(a,b))   //a,b属于同一个集合
                printf("1\n");
            else
                printf("0\n");
        }

    }
    return 0;
}