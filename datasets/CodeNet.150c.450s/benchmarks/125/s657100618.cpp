#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int g[101][101], d[101], f[101];

int dfs(int id, int t)
{
    if(d[id]) return t;
    d[id]=++t;
    int n=g[id][0];
    for(int i=1; i<=n; i++) {
        t=dfs(g[id][i], t);
    }
    f[id]=++t;
    return t;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int id, k;
        cin>>id>>k;
        g[id][0]=k;
        for(int j=1; j<=k; j++) {
            cin>>g[id][j];
        }
    }
    int t=0;
    for(int i=1; i<=n; i++) t=dfs(i, t);
    for(int i=1; i<=n; i++) cout<<i<<' '<<d[i]<<' '<<f[i]<<'\n';
    return 0;
}