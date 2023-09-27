
#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int T = 26;

int main()
{
    int D;
    cin >> D;
    vector<long> c(T);
    rep(i, T) cin >> c[i];
    vector<vector<long>> s(D);
    rep(i, D) {
        s[i] = vector<long>(T);
        rep(j, T) cin >> s[i][j];
    }
    vector<long> Inputs(D);
    rep(i, D) { int a; cin >> a; Inputs[i] = a - 1; }

    long ans = 0;
    vector<long> cc(T);
    rep(i, T) cc[i] = -1;
    rep(i, D) {
        ans += s[i][Inputs[i]];
        cc[Inputs[i]] = i;
        rep(j, T) {
            ans -= c[j] * (i - cc[j]);
        }
        cout << ans << endl;
    }


    return 0;
}