// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_A
// Dijkstra's algorithm
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main(int argc, char **argv)
{
        int V, E, r;
        cin >> V >> E >> r;
        vector<vector< pair<int, int>>> A(V);
        for (int i = 0; i < E; i++) {
                int s, t, d;
                cin >> s >> t >> d;
                A[s].push_back({d, t});
        }
        vector<int> d(V, INT_MAX);
        d[r] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, r});
        while (!q.empty()) {
                auto c = q.top();
                q.pop();
                if (d[c.second] < c.first)
                        continue;
                for (auto n: A[c.second]) {
                        int m = c.first + n.first;
                        if (m < d[n.second]) {
                                d[n.second] = m;
                                q.push({m, n.second});
                        }
                }
        }
        for (int i = 0; i < V; i++) {
                if (d[i] == INT_MAX)
                        cout << "INF";
                else
                        cout << d[i];
                cout << endl;
        }
        return 0;
}