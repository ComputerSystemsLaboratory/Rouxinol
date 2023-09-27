#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long ll;
#define REP(i, n) for (ll i = 0; i < n; i++)

int n, k, w[100001];

bool f(int x) {
    int cnt = 1, p = x;
    REP(i, n) {
        if (w[i] > x) return false;
        if (p < w[i]) {
            cnt++;
            p = x - w[i];
        } else
            p -= w[i];
    }
    return cnt <= k;
}

int search() {
    int ok = int(1e9) + 1, ng = 0;
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if (f(mid)) {
            ok = mid;
        } else {
            ng = mid;
        }
    }
    return ok;
}

int main() {
    cin >> n >> k;
    REP(i, n) cin >> w[i];
    cout << search() << endl;
    return 0;
}

