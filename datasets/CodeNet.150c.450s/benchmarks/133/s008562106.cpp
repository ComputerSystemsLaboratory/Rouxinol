#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

int main() {

    int d; cin >> d;

    vector<int> c(26);
    for (int i = 0; i < 26; ++i) {
        cin >> c[i];
    }

    vector<vector<int>> s(d, vector<int>(26));
    for (int i = 0; i < d; ++i) {
        for (int j = 0; j < 26; ++j) {
            cin >> s[i][j];
        }
    }

    vector<int> t(d);
    for (int i = 0; i < d; ++i) {
        int tc; cin >> tc;
        tc--;
        t[i] = tc;
    }

    int score = 0;
    vector<int> last(26, 0);
    for (int i = 0; i < d; ++i) {
        score += s[i][t[i]];
        last[t[i]] = i + 1;

        int j = i + 1;

        for (int k = 0; k < 26; ++k) {
            score -= c[k] * (j - last[k]);
        }

        cout << score << endl;
    }
}