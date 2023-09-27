#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+50;
int n,k;
int a[maxn];
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;++i) cin>>a[i];
    for(int i=k+1;i<=n;++i)
    {
        if(a[i]>a[i-k]) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}