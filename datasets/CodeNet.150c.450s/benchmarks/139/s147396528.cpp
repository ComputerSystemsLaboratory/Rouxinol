#include <vector>
#include <queue>
#include <iostream>
#include <set>
#include <algorithm>
#define ii pair<int, int>
#define iii pair<ii, int>
#define pq priority_queue

using namespace std;

vector<int> bfs(vector<vector<int>> adj_list, int start, int n) {
    queue<ii> possible;
    set<int> visited;
    vector<int> signposts(n - 1, -1);
    possible.push(make_pair(start, -1));
    while (!possible.empty()) {
        int island = possible.front().first;
        int parent = possible.front().second;
        possible.pop();
        if (visited.find(island) == visited.end()) {
            for (int adj_node : adj_list[island]) {
                possible.push(make_pair(adj_node, island));
            }
            if (island != start && signposts[island - 1] == -1) {
                signposts[island - 1] = parent;
            }
            visited.insert(island);
        }
    }
    if (visited.size() == n) {
        return signposts;
    }
    else {
        return vector<int>(1, -1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj_list(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj_list[a - 1].push_back(b - 1);
        adj_list[b - 1].push_back(a - 1);
    }
    vector<int> ans = bfs(adj_list, 0, n);
    if (ans[0] == -1) {
        cout << "No";
    }
    else {
        cout << "Yes\n";
        for (int i = 0; i < n - 1; i++) {
            cout << ans[i] + 1 << '\n';
        }
    }
}