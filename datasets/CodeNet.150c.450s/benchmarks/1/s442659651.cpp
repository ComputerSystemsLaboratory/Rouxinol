#include "bits/stdc++.h"

using namespace std;

const int INF = 1000000010;

void Main() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> dp(n, INF);
    for (int i = 0; i < n; ++i) {
        auto it = lower_bound(dp.begin(), dp.end(), a[i]);
        *it = a[i];
    }
    int ans = distance(dp.begin(), lower_bound(dp.begin(), dp.end(), INF));
    cout << ans << endl;
}

int main() {
    std::cout << std::fixed << std::setprecision(15);
    Main();
    return 0;
}

