#include <iostream>
#include <cstdio>
#include <vector>
#include <stack>
using namespace std;

void dfs(vector<vector<int>> &adj_list, vector<int> &colors, int s, int c)
{
    stack<int> st;
    colors[s] = c;
    st.push(s);
    while (!st.empty())
    {
        int u = st.top();
        st.pop();
        for (int i = 0; i < adj_list[u].size(); i++)
        {
            int v = adj_list[u][i];
            // cout << u << ", " << v << endl;
            if (colors[v] == -1)
            {
                // cout << 1 << endl;
                colors[v] = c;
                st.push(v);
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj_list(n);
    for (int i = 0; i < m; i++)
    {
        int s, t;
        cin >> s >> t;
        adj_list[s].push_back(t);
        adj_list[t].push_back(s);
    }

    int id = 0;
    vector<int> colors(n, -1);
    for (int i = 0; i < n; i++)
    {
        if (colors[i] == -1)
        {
            dfs(adj_list, colors, i, id++);
        }

        // for (auto a : colors)
        // {
        //     cout << a << ", ";
        // }
        // cout << endl;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int s, t;
        cin >> s >> t;
        if (colors[s] == colors[t])
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
