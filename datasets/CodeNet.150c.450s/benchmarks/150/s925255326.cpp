#include <iostream>

using namespace std;

int main()
{
    int n, a[10001]={0}, m, cnt=0;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>m;
        a[m]++;
    }
    for (int i=0; i<10001; i++)
    {
        for (int j=0; j<a[i]; j++)
        {
            cnt++;
            if (cnt!=n) cout<<i<<' ';
            else cout<<i<<'\n';
        }
    }
    return 0;
}

