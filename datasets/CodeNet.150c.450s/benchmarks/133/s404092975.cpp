#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
const int INF = 1001001001;

const int KIND = 26;
int D;
int c[KIND];
int s[400][KIND];
int last[KIND];

ll calc_score(vector<ll> t) {
    ll score = 0;
    fill(last, last + 26, -1);
    for(int d = 0; d < D; d++) {
        score += s[d][t[d]];
        last[t[d]] = d; 
        for(int i = 0; i < KIND; i++) {
            score -= c[i] * (d - last[i]);
        }
        cout << score << endl;
    }
    return score;
}

int main() {
    cin >> D;
    for(int i = 0; i < KIND; ++i) {
        cin >> c[i];     
    }
    for(int d = 0; d < D; d++) {
        for (int i = 0; i < KIND; i++) {
            cin >> s[d][i];
        }
    }

    vector<ll> t(D);
    for (auto &elem : t) {
        cin >> elem;
        elem--;
    }

    calc_score(t);

    return 0;
}