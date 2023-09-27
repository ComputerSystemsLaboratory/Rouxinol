#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <complex>

using namespace std;
using ll = long long;

#define all(c) (c).begin(), (c).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

#define at(y, x) field[y + 201][x + 201]

int N;
int n[201], d[201];
int field[402][402];
void solve() {
    vector<complex<int>> pos;
    memset(field, -1, sizeof(field));
    at(0, 0) = 0;
    pos.emplace_back(0, 0);
    rep(i, N - 1) {
        auto p = pos[n[i]] + complex<int>(dy[d[i]], dx[d[i]]);
        at(p.real(), p.imag()) = 0;
        pos.push_back(p);
    }
    int wmin, wmax;
    int hmin, hmax;
    wmin = hmin = INF;
    wmax = hmax = -INF;
    /*
    for (int i = -10; i <= 10; i++) {
        for (int j = -10; j <= 10; j++) {
            cout << at(i, j) << " ";
        }
        cout << endl;
    }
    */
    rep(i, 402) rep(j, 402) {
        if (field[i][j] == 0) {
            wmin = min(wmin, j);
            wmax = max(wmax, j);
            hmin = min(hmin, i);
            hmax = max(hmax, i);
        }
    }
    // cout << hmin << ", " << hmax << endl;
    // cout << wmin << ", " << wmax << endl;
    cout << wmax - wmin + 1 << " " << hmax - hmin + 1 << endl;
}
int main() {
    while (cin >> N, N) {
        rep(i, N - 1) cin >> n[i] >> d[i];
        solve();
    }
    return 0;
}