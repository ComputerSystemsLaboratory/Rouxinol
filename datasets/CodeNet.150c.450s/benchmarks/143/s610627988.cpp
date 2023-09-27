#include <bits/stdc++.h>

using namespace std;

using llong = long long int;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define stl_rep(itr, x) for (auto itr = x.begin(); itr != x.end(); ++itr)
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define delete

const static int MOD = 1000000007;
const static int INF = 1<<30;
const static int dx[4] = {1, 0, -1, 0};
const static int dy[4] = {0, 1, 0, -1};

int main (int argc, char *argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    map<llong, llong> cnt;
    vector<llong> A;
    llong sum_of_A = 0;
    rep(i, n) {
        llong a;
        cin >> a;
        A.push_back(a);
        ++cnt[a];
        sum_of_A += a;
    }

    int q;
    cin >> q;
    rep(_, q) {
        llong b, c;
        cin >> b >> c;
        sum_of_A += (c- b)*cnt[b];
        int tmp = cnt[b];
        cnt[b] -= tmp;
        cnt[c] += tmp;
        
        cout << sum_of_A << endl;
    }

    return 0;
}