#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
#include <list>

using namespace std;
int n;
list<int> adj[101];
int d[101] = {};
int f[101] = {};

void DFS(int v)
{
    static int num = 1;
    d[v] = num++;
    while (!adj[v].empty())
    {
        if (d[adj[v].front()] == 0)
            DFS(adj[v].front());
        adj[v].pop_front();
    }
    f[v] = num++;
}

void print()
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d %d %d\n", i, d[i], f[i]);
    }
}

int main()
{
    int u, k, v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> u >> k;
        while (k > 0)
        {
            cin >> v;
            adj[u].push_back(v);
            k--;
        }
    }
    for (int i = 1; i <= n; i++)
        if (d[i] == 0)
            DFS(i);

    print();

    return 0;
}
