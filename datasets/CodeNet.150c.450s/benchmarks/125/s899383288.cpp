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

void dfs(const vector<vector<int>>& edges, vector<int>& ds, vector<int>& fs, int u, int& t) {
    if (ds[u] > 0) {
        return;
    }
    ds[u] = ++t;
    for (auto v : edges[u]) {
        dfs(edges, ds, fs, v, t);
    }
    fs[u] = ++t;
}

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
        sort(begin(edges[u]), end(edges[u]));
    }
    vector<int> ds(n, -1);
    vector<int> fs(n, -1);
    int t = 0;
    for (int i = 0; i < n; i++) {
        dfs(edges, ds, fs, i, t);
    }
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << ds[i] << " " << fs[i] << endl;
    }
}