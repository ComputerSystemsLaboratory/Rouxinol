#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> G[100 + 5];
int d[105];
bool travel[105];

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin >> n;
    int u, k, now;
    for (int i = 1; i <= n; ++i) {
        cin >> u >> k;
        while (k--) {
            cin >> now;
            G[u].push_back(now);
        }
    }
    fill(d, d + 105, -1);
    queue<pair<int, int> > q;
    q.push({1, 0});
    while (!q.empty()) {
        int now = q.front().first;
        int distance = q.front().second;
        q.pop();
        if (travel[now]) continue;
        travel[now] = true;
        d[now] = distance;
        for (auto i : G[now]) {
            q.push({i, distance + 1});
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << i << ' ' << d[i] << '\n';
    }
}

