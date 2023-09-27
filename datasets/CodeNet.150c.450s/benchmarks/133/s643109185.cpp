#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pli = pair<ll, int>;
using pil = pair<int, ll>;
using uint = unsigned int;
template <typename T>
using Graph = vector<vector<T>>;
const int MOD = 1e9 + 7;
const ld PI = acosl(-1);

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int D;
    cin >> D;
    vector<int> c(26);
    vector<vector<int>> s(D, vector<int>(26));
    for (int i = 0; i < 26; ++i)
        cin >> c[i];
    for (int i = 0; i < D; ++i)
        for (int j = 0; j < 26; ++j)
            cin >> s[i][j];
    vector<int> t(D);
    for (int i = 0; i < D; ++i) {
        cin >> t[i];
        t[i]--;
    }

    vector<int> last(26), ans(D + 1);
    for (int i = 0; i < D; ++i) {
        ans[i + 1] = ans[i] + s[i][t[i]];
        last[t[i]] = i + 1;
        for (int j = 0; j < 26; ++j)
            ans[i + 1] -= c[j] * (i + 1 - last[j]);
        cout << ans[i + 1] << '\n';
    }

    return 0;
}
