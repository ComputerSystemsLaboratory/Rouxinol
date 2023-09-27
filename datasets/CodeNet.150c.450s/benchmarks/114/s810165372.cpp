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
    vector<vector<int>> edges(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            edges[i][j] = a;
        }
    }

    vector<bool> done(n, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push(make_pair(0, 0));
    int ans = 0;
    while (!q.empty()) {
        int d = q.top().first;
        int v = q.top().second;
        q.pop();
        if (done[v]) {
            continue;
        }
        done[v] = true;
        ans += d;
        for (int i = 0; i < n; i++) {
            if (edges[v][i] < 0) {
                continue;
            }
            q.push(make_pair(edges[v][i], i));
        }
    }
    cout << ans << endl;
}