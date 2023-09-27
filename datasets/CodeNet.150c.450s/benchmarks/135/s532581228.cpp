#include <bits/stdc++.h>

using namespace std;

#define INF 1001000100010001000
#define MOD 1000000007
#define EPS 1e-10
#define int long long
#define rep(i, N) for (int i = 0; i < N; i++)
#define Rep(i, N) for (int i = 1; i < N; i++)
#define For(i, a, b) for (int i = (a); i < (b); i++)
#define pb push_back
#define mp make_pair
#define i_i pair<int, int>
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define vp vector< i_i >
#define all(a) (a).begin(), (a).end()
#define Int(x) int x; scanf("%lld", &x);

//int dxy[5] = {0, 1, 0, -1, 0};
// assign

signed main()
{
    Int(n);
    Int(m);

    while (n && m) {
        vi h(n), w(m);
        map<int, int> s;
        rep(i, n) {
            cin >> h[i];
        }
        rep(i, n) {
            int tmp = h[i];
            if (s.find(tmp) != s.end()) {
                int sec = s.find(tmp)->second + 1;
                s.erase(tmp);
                s.insert(mp(tmp, sec));
            } else {
                s.insert(mp(tmp, 1));
            }
            for (int j = i+1; j < n; j++) {
                tmp += h[j];
                if (s.find(tmp) != s.end()) {
                    int sec = s.find(tmp)->second + 1;
                    s.erase(tmp);
                    s.insert(mp(tmp, sec));
                } else {
                    s.insert(mp(tmp, 1));
                }
            }
        }
        rep(i, m) {
            cin >> w[i];
        }
        int ret = 0;
        rep(i, m) {
            int tmp = w[i];
            if (s.find(tmp) != s.end()) {
                ret += s.find(tmp)->second;
            }
            for (int j = i+1; j < m; j++) {
                tmp += w[j];
                if (s.find(tmp) != s.end()) {
                    ret += s.find(tmp)->second;
                }
            }
        }
        cout << ret << endl;
        cin >> n >> m;
    }

    return 0;
}