#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void search(vector<vector<int>> &g, vector<int> &nxt, queue<int> &q)
{
    int tar = q.front(); q.pop();
    for (int s:g[tar])
    {
        if (nxt[s] == -1) 
        {
            q.push(s);
            nxt[s] = tar;
        }
    }
    if (q.size() < 1) return;
    else search(g, nxt, q);
}

int main(void)
{
    int n, m; cin >> n >> m;
    vector<vector<int>> g(n, vector<int>(0));
    int n1, n2;
    for (int i = 0; i < m; i++)
    {
        cin >> n1 >> n2;
        g[n1-1].push_back(n2-1);
        g[n2-1].push_back(n1-1);
    }
    
    vector<int> nxt(n, -1); nxt[0] = 0;
    queue<int> q; q.push(0);
    search(g, nxt, q);
    cout << "Yes" << endl;
    for (int i = 1; i < n; i++)
    {
        cout << nxt[i] + 1 << endl;
    }
}
