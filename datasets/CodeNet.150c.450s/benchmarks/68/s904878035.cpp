#include <bits/stdc++.h>
using namespace std;
#define dump(x) cout << (x) << '\n';
typedef int64_t Int;
Int mod = 1e9+7;
Int INF = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    vector<Int> res;
    while (true) {
        Int n;
        cin >> n;
        vector<Int> a(n);
        if (n == 0) break;
        for (Int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        Int mi = 1e9;
        for (Int i = 0; i < n - 1; i++) mi = min(mi, a[i + 1] - a[i]);
        res.emplace_back(mi);
    }
    for (Int i = 0; i < (Int)res.size(); i++) dump(res[i]);
    return 0;
} 

