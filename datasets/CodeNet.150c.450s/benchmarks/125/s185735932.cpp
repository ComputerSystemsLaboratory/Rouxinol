#include <vector>
#include <iostream>
#include <set>
#include <cstdio>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <cmath>
#include <complex>
#include <algorithm>
#include <tuple>
#include <algorithm>
#include <limits>
#include <map>

using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

int d[110], f[110];
vector<int> g[110];
int t;
bool used[110];
void solve(int i) {
    if (used[i]) return;
    used[i] = true;
    t++;
    d[i] = t;
    for (int j: g[i]) {
        solve(j);
    }
    t++;
    f[i] = t;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int id, u;
        cin >> id >> u;
        for (int j = 0; j < u; j++) {
            int a;
            cin >> a;
            g[i].push_back(a-1);
        }
    }
    t = 0;
    fill_n(used, 110, false);
    for (int i = 0; i < n; i++) {
        solve(i);
    }
    for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", i+1, d[i], f[i]);
    }
    return 0;
}