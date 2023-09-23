#include <iostream>

using namespace std;

int main()
{
    int n, u, k, v, adj[110][110]={0};
    cin>>n;
    for (int i=0; i<n; i++)
    {
        cin>>u>>k;
        for (int j=0; j<k; j++)
        {
            cin>>v;
            adj[u][v]=1;
        }
    }
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (j!=n) cout<<adj[i][j]<<' ';
            else cout<<adj[i][j]<<'\n';
        }
    }
    return 0;
}

