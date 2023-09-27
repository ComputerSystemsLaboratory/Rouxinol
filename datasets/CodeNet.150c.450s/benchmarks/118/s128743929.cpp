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
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

struct Date {
    int y, m, d;
    Date(int y, int m, int d) : y(y), m(m), d(d) {}
    Date() = default;
    Date& operator++() {
        bool f = m % 2 == 1;
        f |= y % 3 == 0;
        d++;
        int maxi = 20;
        if (f) maxi = 21;
        if (d == maxi) {
            d = 1;
            m++;
        }
        if (m == 11) {
            m = 1;
            y++;
        }
        return *this;
    }
};

int n;
int y, m, d;

void solve() {
    auto date = Date(y, m, d);
    int ans = 0;
    while (1) {
        if (date.y == 1000) break;
        ans++;
        ++date;
        // cout << date.y << ", " << date.m << ", " << date.d << endl;
    }
    cout << ans << endl;
}
int main() {
    cin >> n;
    rep(i, n) {
        cin >> y >> m >> d;
        solve();
    }
    return 0;
}