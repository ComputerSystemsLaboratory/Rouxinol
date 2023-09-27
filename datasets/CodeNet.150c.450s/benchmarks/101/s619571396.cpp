#include <bits/stdc++.h>
using namespace std;
int flag[100000];
vector<int> G[100000];
int color = 0;

void dfs(int f)
{
    for (int i = 0; i < G[f].size(); i++)
    {
        if (flag[G[f][i]] == -1)
        {
            flag[G[f][i]] = color;
            dfs(G[f][i]);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int f, g;
    for (int i = 0; i < m; i++)
    {

        cin >> f >> g;
        G[f].push_back(g);
        G[g].push_back(f);
    }

    for (int i = 0; i < n; i++)
        flag[i] = -1;

    for (int i = 0; i < n; i++)
    {
        if (flag[i] == -1)
        {
            color = i;
            flag[i] = color;
            dfs(i);
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        cin >> f >> g;
        if (flag[f] == flag[g])
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}
