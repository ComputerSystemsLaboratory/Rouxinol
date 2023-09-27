#include <bits/stdc++.h>
using namespace std;

void dfs(int in, int color,
    const vector<vector<int>>& graph,
    vector<int>& colors) 
{
    vector<bool> checkList(colors.size());
    stack<int> stack;
    stack.push(in);
    colors[in] = color;

    while (!stack.empty())
    {
        int x = stack.top();
        bool canLeave = true;
        for (const auto& g : graph[x]) {
            if (colors[g] == 0) {
                stack.push(g);
                colors[g] = color;
                checkList[g] = true;
                canLeave = false;
            }
        }
        if (canLeave) {
            stack.pop();
        }
    }
}

void wfs(int in, int color,
    const vector<vector<int>>& graph,
    vector<int>& colors)
{
    queue<int> queue;
    queue.push(in);
    vector<bool> checkList(colors.size());
    while (!queue.empty()) 
    {
        int x = queue.front();
        queue.pop();
        colors[x] = color;
        for (auto y : graph[x]) {
            if (!checkList[y]) {
                queue.push(y);
                checkList[y] = true;
            }
        }
    }
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<vector<int>> tree(n);
    vector<int> colors(n);

    for (int i = 0; i < m; ++i) {
        int s, t;
        cin >> s >> t;
        tree[s].push_back(t);
        tree[t].push_back(s);
    }
    int color = 0;
    for (int i = 0; i < n; ++i) {
        if (colors[i] != 0) {
            continue;
        }
        wfs(i, ++color, tree, colors);
        //dfs(i, ++color, tree, colors);
    }

    int qNum;
    cin >> qNum;
    vector<pair<int, int>> question(qNum);
    for (auto& q : question) {
        cin >> q.first >> q.second;
    }

    for (const auto& q : question) {
        if (colors[q.first] == colors[q.second]) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}
