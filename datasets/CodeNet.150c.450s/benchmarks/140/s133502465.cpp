// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_3_A
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

int main(int arg, char **argv)
{
        int V, E;
        cin >> V >> E;
        vector<vector<pair<int, int>>> A(V);
        for (int i = 0; i < E; i++) {
                int s, t, w;
                cin >> s >> t >> w;
                A[s].push_back({w, t});
                A[t].push_back({w, s});
        }
        vector<bool> U(V);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({0, 0});
        int sum = 0;
        while (!q.empty()) {
                auto c = q.top();
                q.pop();
                if (U[c.second])
                        continue;
                U[c.second] = true;
                sum += c.first;
                for (auto &a: A[c.second])
                        q.push(a);
        }
        cout << sum << endl;
        return 0;
}