#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using Graph = vector<vector<int>>;

int main(void)
{
    ll n,m;
    cin >> n >> m;
    Graph g(n+1);
    for(int i=0;i<m;i++)
    {
        ll a,b;
        cin >> a >> b;
        //a--,b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int> direct(n+1,-1);
    queue<int> que;

    direct[0]=0;
    direct[1]=0;
    que.push(1);

    while(!que.empty())
    {
        int v = que.front();
        que.pop();

        for(int nv:g[v])
        {
            if(direct[nv] != -1) continue;

            direct[nv] = v;
            que.push(nv);
        }
    }
    cout << "Yes" << endl;
    for(int i=1;i<n;i++)
    {
        cout << direct[i+1] << endl;
    }
    return 0;
}
