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

int D;
int c[26], s[365][26], t[365], last[26], ans[366];

void calc() {
    for (int i = 0; i < D; ++i) {
        ans[i + 1] = ans[i] + s[i][t[i]];
        last[t[i]] = i + 1;
        for (int j = 0; j < 26; ++j)
            ans[i + 1] -= c[j] * (i + 1 < last[j] ? i + 1 : i + 1 - last[j]);
        cout << ans[i + 1] << '\n';
    }
}

void change(int d, int q) {
    d--, q--;
    int old = t[d];
    if (old == q)
        return;

    t[d] = q, last[old] = 0;
    int dif = 0, pos1 = 0, pos2 = 0;
    for (int i = 0; i < D; ++i) {
        last[t[i]] = i + 1;
        if (i < d)
            pos1 = last[q], pos2 = last[old];
        else {
            ans[i + 1] += s[d][q] - s[d][old];
            if (last[q] == d + 1)
                dif += c[q] * (d + 1 - pos1);
            if (last[old] <= d + 1)
                dif -= c[old] * (d + 1 - pos2);
        }
        ans[i + 1] += dif;
    }
}

void greedy() {
    for (int i = 0; i < D; ++i) {
        ans[i + 1] = INT_MIN;
        int maidx = 0;
        for (int k = 0; k < 26; ++k) {
            int res = ans[i] + s[i][k], old = last[k];
            last[k] = i + 1;
            for (int j = 0; j < 26; ++j)
                res -= c[j] * (i + 1 - last[j]);

            if (ans[i + 1] < res) {
                ans[i + 1] = res;
                maidx = k;
            }
            last[k] = old;
        }
        t[i] = maidx;
        last[t[i]] = i + 1;
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> D;
    for (int i = 0; i < 26; ++i)
        cin >> c[i];
    for (int i = 0; i < D; ++i)
        for (int j = 0; j < 26; ++j)
            cin >> s[i][j];

    for (int i = 0; i < D; ++i) {
        cin >> t[i];
        t[i]--;
    }

    calc();

    // int M;
    // cin >> M;
    // for (int i = 0; i < M; ++i) {
    //     int d, q;
    //     cin >> d >> q;
    //     change(d, q);
    //     cout << ans[D] << '\n';
    // }
    // for (int i = 0; i < D; ++i)
    //     cout << t[i] + 1 << '\n';

    return 0;
}
