#include <bits/stdc++.h>

using namespace std;
int tree[1000000],n;
int sum(int k)
{
    int s=0;
    while (k>=1)
    {
        s+=tree[k];
        k-=k&-k;
    }
    return s;
}
void add(int k,int x)
{
    while (k<=n)
    {
        tree[k]+=x;
        k+=k&-k;
    }
}
int main()
{
    int q,kom,l,r,i;
    scanf("%d%d",&n,&q);
    for(i=0;i<n;i++)
        tree[i]=0;
    for(i=0;i<q;i++)
    {
        scanf("%d%d%d",&kom,&l,&r);
        if (kom==0)
            add(l,r);
        else if (l!=0)printf("%d\n",sum(r)-sum(l-1));
        else printf("%d\n",sum(r));
    }
    return 0;
}