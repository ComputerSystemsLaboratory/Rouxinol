#include <algorithm>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> edges(n);
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        u--;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            v--;
            edges[u].push_back(v);
        }
    }

    vector<int> ds(n, -1);
    ds[0] = 0;
    queue<int> q;
    q.push(0);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : edges[u]) {
            if (ds[v] >= 0) {
                continue;
            }
            ds[v] = ds[u] + 1;
            q.push(v);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << ds[i] << endl;
    }
}