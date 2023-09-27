/*
 * Problem Description: Connected Components
 * Category: Graph I
 * Author: Khan
 * Date: 21th October, 2017
 */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;
static const int MAX = 100000;
static const int NIL = -1;

int n;
vector<int> G[MAX];
int color[MAX];

void DFS(int r, int c)
{
    stack<int> s;
    s.push(r);
    color[r] = c;
    while(!s.empty())
    {
        int u = s.top(); s.pop();
        for (int i = 0; i < G[u].size(); ++i)
        {
            int v = G[u][i];
            if(color[v] == NIL)
            {
                color[v] = c;
                s.push(v);
            }
        }
    }
}

void assignColor()
{
    int id = 1;
    for (int i = 0; i < n; ++i)
        color[i] = NIL;
    for (int i = 0; i < n; ++i)
        if(color[i] == NIL)
            DFS(i, id++);
}

int main(int argc, char const *argv[])
{
    //freopen("sample.txt", "r", stdin);
    int s, t, m, q;

    cin >> n >>m;

    for (int i = 0; i < m; ++i)
    {
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    assignColor();

    cin >> q;

    for (int i = 0; i < q; ++i)
    {
        cin >> s >> t;
        if(color[s] == color[t])
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}