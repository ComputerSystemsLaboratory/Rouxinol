#include <iostream>
#include <set>
#include <vector>
#include <utility>

using namespace std;

typedef long long signed int ll;

constexpr ll NIL = -20000000000;

vector<pair<int, int>> w;
ll dp[100][100];

ll mmc(int b, int e) {
    if (e == b + 1 || e == b) return 0;
    if (!dp[b][e]) {
        dp[b][e] = -NIL;
        for (int i = b + 1; i < e; i++) {
            dp[b][e] = min(dp[b][e], mmc(b, i) + mmc(i, e) + w[b].first * w[i].first * w[e - 1].second);
        }
    }
    return dp[b][e];
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        w.push_back(make_pair(x, y));
    }
    cout << mmc(0, n) << endl;
}

