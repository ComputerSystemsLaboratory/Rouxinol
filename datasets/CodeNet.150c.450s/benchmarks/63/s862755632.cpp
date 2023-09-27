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
                A[s].push_back({t, d});
        }
        vector<int> d(V, INT_MAX);
        d[r] = 0;
        bool done = false;
        while (!done) {
                done = true;
                for (int i = 0; i < V; i++) {
                        if (d[i] == INT_MAX)
                                continue;
                        for (auto n: A[i]) {
                                int m = d[i] + n.second;
                                if (m < d[n.first]) {
                                        d[n.first] = m;
                                        done = false;
                                }
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