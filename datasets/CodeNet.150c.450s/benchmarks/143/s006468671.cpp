#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> num;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i];
        num[a[i]]++;
    }

    int q;
    cin >> q;
    vector<int> b(q), c(q);
    for (int i = 0; i < q; i++) cin >> b[i] >> c[i];

    for (int i = 0; i < q; i++) {
        ans += (c[i] - b[i]) * num[b[i]];
        num[c[i]] += num[b[i]];
        num[b[i]] = 0;
        cout << ans << endl;
    }

    return 0;
}
