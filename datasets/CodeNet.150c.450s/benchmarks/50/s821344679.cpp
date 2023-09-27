#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>

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

int main() {
    int n;
    int coins[] = {500, 100, 50, 10, 5};
    while (cin >> n, n) {
        int ans = 0;
        int m = 1000 - n;
        rep(i, 5) {
            ans += m / coins[i];
            m %= coins[i];
        }
        ans += m;
        cout << ans << endl;
    }
    return 0;
}