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

void dijkstra(vector<vector<pair<int, int>>>& edges, vector<int>& ds, int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push(make_pair(0, start));
    while (!q.empty()) {
        int d = q.top().first;
        int u = q.top().second;
        q.pop();
        if (ds[u] >= 0) {
            continue;
        }
        ds[u] = d;
        for (auto p : edges[u]) {
            q.push(make_pair(d + p.second, p.first));
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> edges(n);
    for (int i = 0; i < n; i++) {
        int u, k;
        cin >> u >> k;
        for (int j = 0; j < k; j++) {
            int v, c;
            cin >> v >> c;
            edges[u].push_back(make_pair(v, c));
        }
    }

    vector<int> ds(n, -1);
    dijkstra(edges, ds, 0);

    for (int i = 0; i < n; i++) {
        cout << i << " " << ds[i] << endl;
    }
}