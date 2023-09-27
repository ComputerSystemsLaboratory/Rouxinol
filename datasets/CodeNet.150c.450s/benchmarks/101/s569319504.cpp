#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

vector<vector<int>> A;
vector<int> visited;

void dfs(int s, int id) {
    stack<int> S;
    S.push(s);
    visited[s] = id;

    while (!S.empty()) {
        auto j = S.top();
        S.pop();

        auto& v = A[j];
        for (auto it = v.begin(); it != v.end(); ++it) {
            auto i = *it;
            if (visited[i] == -1) {
                visited[i] = id;
                S.push(i);
            }
        }
    }
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    A.resize(n);
    visited.resize(n, -1);

    for (int i = 0; i < m; ++i) {
        int s, t;
        cin >> s >> t;
        A[s].push_back(t);
        A[t].push_back(s);
    }
    for (int i = 0; i < A.size(); ++i) {
        if (visited[i] == -1)
            dfs(i, i);
    }

    int q;
    cin >> q;
    for (int j = 0; j < q; ++j) {
        int x, y;
        cin >> x >> y;

        if (visited[x] == visited[y]) {
            cout << "yes";
        } else {
            cout << "no";
        }
        cout << endl;
    }

    return 0;
}