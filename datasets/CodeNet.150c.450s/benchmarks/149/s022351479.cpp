#include <iostream>
#include <cstdio>

using namespace std;
int f[10005];
int n,m;
int getf(int p)
{
    if(f[p] == p)
        return p;
    else
        return f[p] = getf(f[p]);
}
void unite(int x,int y)  //合并x,y
{
    int t1,t2;
    t1 = getf(x);
    t2 = getf(y);
    if(t1 != t2)
    {
        for(int i=0;i<m;i++)
        {
            if(f[i] == t2)
                f[i] = t1;
        }
        f[t2] = t1;
    }
    return ;
}
int same(int x,int y)
{
    if(f[x] == f[y])
        return 1;
    else
        return 0;
}
int main()
{
    int t,a,b;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
        f[i] = i;
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d%d",&t,&a,&b);
        if(t == 0)
            unite(a,b);
        else
        {
            if(same(a,b) == 1)
                printf("1\n");
            else
                printf("0\n");
        }

    }
    return 0;
}