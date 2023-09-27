#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <queue>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n + 1, vector<int>(0));
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector<int> res(n + 1, -1);
    vector<int> v1, v2;
    v1.push_back(1);
    while (v1.size() > 0) {
        v2.clear();
        for (auto node : v1) {
            for (auto next : v[node]) {
                if (res[next] != -1) continue;
                res[next] = node;
                v2.push_back(next);
            }
        }
        v1 = v2;
    }
    for (int i = 2; i <= n; i++) {
        if (res[i] == -1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    for (int i = 2; i <= n; i++) {
        cout << res[i] << endl;
    }
}
