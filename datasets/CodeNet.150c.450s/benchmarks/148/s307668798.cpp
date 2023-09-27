#include <bits/stdc++.h>

using namespace std;

using llong = long long int;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define stl_rep(itr, x) for (auto itr = x.begin(); itr != x.end(); ++itr)
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()

const static int MOD = 1000000007;
const static int INF = 1<<30;
const static int dx[4] = {1, 0, -1, 0};
const static int dy[4] = {0, 1, 0, -1};

int main (int argc, char *argv[]) {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    map<string, int> M;
    rep(i, n) {
        string s;
        cin >> s;
        ++M[s];
    }

    cout << "AC" << ' ' << 'x' << ' ' << M["AC"] << endl;
    cout << "WA" << ' ' << 'x' << ' ' << M["WA"] << endl;
    cout << "TLE" << ' ' << 'x' << ' ' << M["TLE"] << endl;
    cout << "RE" << ' ' << 'x' << ' ' << M["RE"] << endl;
    return 0;
}