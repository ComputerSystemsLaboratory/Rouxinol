#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < (int)(n); i++)
using ull = unsigned long long;
using ll = long long;

const int INF = 1E+9;

int main() {
    int N;
    cin >> N;

    int a[N];
    rep(i, N) cin >> a[i];

    int LIS[N];
    fill(LIS, LIS + N, INF);

    rep(i, N) {
        auto pos = lower_bound(LIS, LIS+N, a[i]);
        *pos = a[i];
    }

    cout << lower_bound(LIS, LIS+N, INF) - LIS << endl;

    return 0;
}
