#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& g, vector<int>& color, int id, int c) {
    stack<int> s;
    vector<bool> visited(g.size(), false);
    s.push(id);
    color[id] = c;
    while (!s.empty()) {
        int id = s.top();
        s.pop();
        visited[id] = true;

        for (int i = 0; i < g[id].size(); ++i) {
            int adj = g[id][i];
            if (!visited[adj]) {
                color[adj] = c;
                s.push(adj);
            }
        }
    }
}

void assign_colors(vector<vector<int>>& g, vector<int>& color) {
    int color_id = 1;
    for (int i = 0; i < g.size(); ++i) {
        if (color[i] == -1) {
            dfs(g, color, i, color_id);
            ++color_id;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n);
    for (int i = 0; i < m; ++i) {
        int p1, p2;
        cin >> p1 >> p2;
        g[p1].push_back(p2);
        g[p2].push_back(p1);
    }

    vector<int> color(n, -1);
    assign_colors(g, color);

    int p;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        int p1, p2;
        cin >> p1 >> p2;
        if (color[p1] == color[p2])
            cout << "yes\n";
        else
            cout << "no\n";
    }
}

