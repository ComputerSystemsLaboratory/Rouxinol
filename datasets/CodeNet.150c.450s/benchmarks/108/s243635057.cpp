#include <iostream>
#include <vector>
#include <queue>

using namespace std;
using P = pair<int, int>;

const int MAX = 101;

vector<int> G[MAX];
int d[MAX];

int main() {

    int n;
    cin >> n;

    fill(d, d + MAX, -1);

    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            G[u].push_back(v);
        }
    }

    queue<P> que;

    d[1] = 0;
    que.emplace(make_pair(1, d[1]));

    while (!que.empty()) {

        P &u = que.front();
        que.pop();

        for (auto v : G[u.first]) {
            if (d[v] == -1) {
                d[v] = u.second + 1;
                que.emplace(make_pair(v, d[v]));
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << i << " " << d[i] << endl;
    }
}
