#include<iostream>
#include<vector>
#include<stack>
using namespace std;
const int maxn = 100001;

vector<int> G[maxn];
int vis[maxn];

void DFS(int u, int k)
{
    vis[u] = k;
    for(vector<int>::iterator it = G[u].begin(); it != G[u].end(); it++)
        if(vis[*it] == -1)
            DFS(*it, k);
}

int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int j = 0; j < n; j++)
            vis[j] = -1;
    for(int i = 0; i < n; i++)
        if(vis[i] == -1)
            DFS(i, i);
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        if(vis[y] == vis[x])
            cout << "yes" <<endl;
        else
            cout << "no" <<endl;
    }
    return 0;
}

