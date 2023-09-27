#include <iostream>

using namespace std;

int main()
{
    int n, m, p, a, v, sum=0;
    while (1)
    {
        cin>>n>>m>>p;
        if (n==0 && m==0 && p==0) break;
        for (int i=1; i<=n; i++)
        {
            cin>>a;
            sum+=a;
            if (i==m) v=a;
        }
        if (v==0) cout<<"0\n";
        else cout<<sum*(100-p)/v<<'\n';
        sum=0;
    }

    return 0;
}

