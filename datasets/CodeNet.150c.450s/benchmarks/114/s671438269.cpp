#include <climits>
#include <iostream>
#include <vector>

using namespace std;

int prim(vector<vector<int>>& graph) {
    int n = graph.size() - 1;
    vector<bool> isInTree(n + 1);
    vector<int> weight(n + 1);
    for (int i = 1; i <= n; i++)
        weight[i] = INT_MAX;
    int v = 1;
    weight[v] = 0;
    while (true) {
        isInTree[v] = true;
        int minCost = INT_MAX;
        for (int i = 1; i <= n; i++) {
            if (!isInTree[i])
                continue;
            for (int j = 1; j <= n; j++) {
                int cost = graph[i][j];
                if (cost >= 0 && !isInTree[j] && cost <= minCost) {
                    v = j;
                    minCost = cost;
                }
            }
        }
        if (minCost == INT_MAX)
            break;
        weight[v] = minCost;
    }

    int result = 0;
    for (int i = 1; i <= n; i++)
        result += weight[i];
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> graph(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> graph[i][j];

    int totalCost = prim(graph);
    cout << totalCost << endl;

    return 0;
}

