#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <numeric>
#include <cstring>
#include <cmath>
#include <stack>

const int MOD = 1e9 + 7;
const int MAX = 100000;
#define rep(i,n) for(int i=0;i<(n);i++)

using ll = long long int;
using namespace std;

vector<int> G[MAX];
int color[MAX];
int n;

void dfs(int r, int c)
{
    stack<int> S;
    S.push(r);
    color[r] = c;
    while(!S.empty())
    {
        int u = S.top(); S.pop();
        for(int i = 0; i < G[u].size(); i++)
        {
            int v = G[u][i];
            if(color[v] == -1)
            {
                color[v] = c;
                S.push(v);
            }
        }
    }
}

void assignColor()
{
    int id = 1;
    for(int i = 0; i < n; i++)
        color[i] = -1;
    for(int u = 0; u < n; u++)
        if(color[u] == -1)
            dfs(u, id++);
}

int main()
{
    int s, t, m, q;
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    assignColor();

    cin >> q;

    for(int i = 0; i < q; i++)
    {
        cin >> s >> t;
        if(color[s] == color[t])
            cout << "yes" << endl;
        else 
            cout << "no" << endl;
    }


    return 0;
}
