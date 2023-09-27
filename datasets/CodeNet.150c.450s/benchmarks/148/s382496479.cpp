#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define precise(i) fixed << setprecision(i)
#define fastIO (cin.tie(0), cout.tie(0), ios::sync_with_stdio(false))
using lint = long int;
using llint = long long int;
using namespace std;

int main() {
    fastIO;

    int n;
    cin >> n;
    vector<string> judge{"AC", "WA", "TLE", "RE"};
    int count[4]{0};

    rep(_, n) {
        string order;
        cin >> order;

        if ("AC" == order) {
            count[0] += 1;
        } else if ("WA" == order) {
            count[1] += 1;
        } else if ("TLE" == order) {
            count[2] += 1;
        } else {
            count[3] += 1;
        }
    }

    for (size_t i = 0; i < 4; i++) {
        cout << judge.at(i) << " x " << count[i] << endl;
    }
}