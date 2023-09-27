#include <bits/stdc++.h>

#define rep(i, a, b) for (int i = a; i < (int)(b); ++i)
#define rrep(i, a, b) for (int i = b - 1; i >= (int)(a); --i)

using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m, q;
    cin >> n >> m;

    vvi g(n);

    rep(i, 0, m) {
        int s, t;
        cin >> s >> t;

        g[s].push_back(t);
        g[t].push_back(s);
    }

    vi map(n, -1);
    vector<bool> seen(n, false);

    int t = 0;
    rep(i, 0, n) {
        if (seen[i]) { continue; }
        queue<int> st;
        st.push(i);
        seen[i] = true;
        map[i] = t;

        while (!st.empty()) {
            int v = st.front();
            st.pop();

            for (auto itr = g[v].begin(); itr != g[v].end(); ++itr) {
                if (!seen[*itr]) {
                    st.push(*itr);
                    seen[*itr] = true;
                    map[*itr] = t;
                }
            }
        }
        ++t;
    }

    cin >> q;
    rep(i, 0, q) {
        int s, t;
        cin >> s >> t;
        cout << (map[s] == map[t] ? "yes" : "no") << endl;
    }

    return 0;
}
