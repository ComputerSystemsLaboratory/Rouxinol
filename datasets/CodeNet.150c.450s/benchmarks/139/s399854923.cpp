#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <queue>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int mod = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    int n, m, u, v, d[100005] = {}, z[100005] = {};
    vector<int> g[100005] = {};
    queue<int> q;
    cout << "Yes\n";
    cin >> n >> m;
    while (m--) cin >> u >> v, g[u].push_back(v), g[v].push_back(u);
    d[1] = 1;
    q.push(1);
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i : g[x]) if (!d[i]) d[i] = d[x] + 1, z[i] = x, q.push(i);
    }
    for (int i = 2; i <= n; i++) cout << z[i] << '\n';
}
