#include <bits/stdc++.h>
using namespace std;
#define maxn 24
int a[maxn];
int n,q;
bool solve(int i,int m)
{
    if(m==0)
        return true;
    if(i>n)
        return false;
    return(solve(i+1,m)||solve(i+1,m-a[i]));
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    while(q--)
    {
        int k;
        scanf("%d",&k);
        if(solve(0,k))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}