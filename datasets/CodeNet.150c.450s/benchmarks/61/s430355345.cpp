#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <functional>
#include <stack>
#include <utility>
#include <map>
#include <queue>
#include <set>
#include <array>
#include <climits>
#include <cassert>

using namespace std;

typedef long long ll;
typedef pair<int, int> P;

const ll MOD = ll(1e9) + 7;
const ll INF = LLONG_MAX;
const ll MAX_N = ll(1e5) + 5;
const double EPS = 10e-8;
const double PI = 3.14159265359;

#define REP(i, n) for (ll i = 0; i < n; i++)
#define REPR(i, n) for (ll i = n; i >= 0; i--)
#define FOR(i, m, n) for (ll i = m; i < n; i++)

int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

int main() {
    int n, a, b, c, x, y[105];
    while (1) {
        cin >> n >> a >> b >> c >> x;
        if (n == 0) break;
        REP(i, n) cin >> y[i];
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if(i>0&&y[i]==y[i-1]){
                x = (a * x + b) % c;
                cnt++;
            }
            while (x != y[i] && cnt <= 10000) {
                x = (a * x + b) % c;
                cnt++;
            }
        }
        if (cnt > 10000)
            cout << -1 << endl;
        else
            cout << cnt << endl;
    }
    return 0;
}

