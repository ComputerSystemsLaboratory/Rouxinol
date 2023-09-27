#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
#include <list>
#define N 100000
using namespace std;
int n;
list<int> adj[N];
bool f[N] = {};
int g[N] = {};


void setGraphNum(int v, int i)
{
    g[v] = i;
    f[v] = true;
    list<int>::iterator itr = adj[v].begin();
    while (itr != adj[v].end())
    {
        if (!f[*itr])
            setGraphNum(*itr, i);
        itr++;
    }
}
void CalcGraphNum()
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        if (g[i] == 0)
            setGraphNum(i, k++);
    }
}

int main()
{
    int m, u, v, q;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    CalcGraphNum();
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> u >> v;
        if (g[u] == g[v])
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
