#include <bits/stdc++.h>
using namespace std;

vector<int> bfs(
    int p,
    const vector<vector<int>> graph)
{
    queue<int> Q;
    vector<bool> status(graph.size());
    vector<int> distance(graph.size());
    Q.push(p);
    status[p] = true;
    while (!Q.empty())
    {  
        int k = Q.front();
        Q.pop();
        for (const auto& q : graph[k]) {
            if (!status[q]) {
                Q.push(q);
                status[q] = true;
                distance[q] = distance[k]+1;
            }
        }
    }
    for (int i = 0; i < status.size(); ++i) {
        if (status[i] == 0) {
            distance[i] = -1;
        }
    }
    return distance;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> graph(n);
    for (auto&& g : graph) {
        int id;
        cin >> id;
        int size;
        cin >> size;
        g.reserve(size);
        for (int j = 0; j < size; ++j) {
            int k; 
            cin >> k;
            g.push_back(k-1);
        }
    }
    auto result = bfs(0, graph);
    for (int i = 0; i < result.size(); ++i) {
        cout << i+1 << " " << result[i] << endl;
    }
}
