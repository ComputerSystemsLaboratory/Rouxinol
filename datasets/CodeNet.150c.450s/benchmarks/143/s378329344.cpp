#include <bits/stdc++.h>

using namespace std;

//FILE *fi=freopen("1.txt","r",stdin);

int n,q,d[100001];
long long s=0;

void nhap()
{
    scanf("%d",&n);
    for (int i=1;i<=n;++i)
    {
        int x;
        scanf("%d",&x);
        d[x]++;
        s+=x;
    }
    scanf("%d",&q);
    while (q--)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        s+=d[u]*v-d[u]*u;
        d[v]+=d[u];
        d[u]=0;
        cout<<s<<"\n";
    }
}

int main()
{
    nhap();
    return 0;
}
