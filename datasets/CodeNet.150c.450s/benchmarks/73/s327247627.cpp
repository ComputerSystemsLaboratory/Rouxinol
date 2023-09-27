#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;
int n,q;

struct fenwicktree
{
    vector<int> tree;
    fenwicktree(int n):tree(n+1) {}

    int sum(int pos)
    {
        int ret=0;
        while(pos>0)
        {
            ret += tree[pos];
            pos &= (pos-1);
        }
        return ret;
    }

    void add(int pos,int value)
    {
        while(pos < tree.size())
        {
            tree[pos] += value;
            pos += (pos & -pos);
        }
    }
};

int main()
{
    // freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    scanf("%d%d",&n,&q);
    fenwicktree ft(n);
    for(int i=1;i<=q;++i)
    {
        int command,x,y;
        scanf("%d%d%d",&command,&x,&y);
        if(command == 0) ft.add(x,y);
        if(command == 1) printf("%d\n",ft.sum(y)-ft.sum(x-1));
    }
    return 0;
}