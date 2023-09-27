#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
#define N 10000
using namespace std;

class edge
{
  public:
    int i, j, weigt;
    bool operator()(edge e1, edge e2)
    {
        return e1.weigt < e2.weigt;
    }
};
edge e[N];
vector<int> adj[N];
int n;
int c = 0;
int f[N] = {};
int g[N] = {};

void setGraphNum(int v, int i)
{
    g[v] = i;
    f[v]++;
    vector<int>::iterator itr = adj[v].begin();
    while (itr != adj[v].end())
    {
        if (f[*itr] != c)
            setGraphNum(*itr, i);
        itr++;
    }
}
void CalcGraphNum()
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        if (f[i] != c)
            setGraphNum(i, k++);
    }
}
int main()
{
    cin >> n;
    int k = 0, tmp = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> tmp;
            if (j < i + 1 || tmp < 0)
                continue;
            e[k].i = i;
            e[k].j = j;
            e[k].weigt = tmp;
            k++;
        }
    }
    sort(e, e + k, edge());
    for (int i = 0; i < n; i++)
        g[i] = i;
    for (int i = 0; i < k; i++)
    {
        if (g[e[i].i] == g[e[i].j])
            continue;
        adj[e[i].i].push_back(e[i].j);
        adj[e[i].j].push_back(e[i].i);
        sum += e[i].weigt;
        //cout << e[i].i << " " << e[i].j << " " << e[i].weigt << "\n";
        if (++c == n - 1)
            break;
        CalcGraphNum();
    }

    cout << sum << "\n";
    return 0;
}
