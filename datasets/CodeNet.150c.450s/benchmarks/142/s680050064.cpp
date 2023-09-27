#include <bits/stdc++.h>

using namespace std;

int n,k,a[200001];

void nhap()
{
    scanf("%d %d",&n,&k);
    for (int i=1;i<=n;++i)
    {
        scanf("%d",&a[i]);
    }
}

void process()
{
    for (int i=k+1;i<=n;++i)
    {
        if (a[i]>a[i-k])
            cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }
}

int main()
{
    nhap();
    process();
    return 0;
}
