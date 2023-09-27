#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;

int DAYS;
const int TYPES = 26;

vector<int> c;
vector<vector<ll>> s;

vector<ll> simulate(vector<int> &t) {
    vector<vector<int>> last(TYPES, {-1});
    vector<ll> ret(DAYS);
    ll now = 0;
    for (int i = 0; i < DAYS; i++) {
        now += s[i][t[i]], last[t[i]].push_back(i);
        for (int j = 0; j < TYPES; j++) {
            now -= c[j] * (i - last[j].back());
        }
        ret[i] = now;
    }
    return ret;
}

ll scoring(vector<ll> &&satisfying) {
    ll score = 0;
    for (auto &x:satisfying)score += max(1000000 + x, 0LL);
    return score;
}

int main() {
    cin >> DAYS;
    c.resize(TYPES);
    for (int i = 0; i < TYPES; i++)cin >> c[i];
    s.assign(DAYS, vector<ll>(TYPES));
    for (int i = 0; i < DAYS; i++) {
        for (int j = 0; j < TYPES; j++) {
            cin >> s[i][j];
        }
    }

    vector<int> t(DAYS);
    for (int i = 0; i < DAYS; i++) cin >> t[i], t[i]--;

    for (auto x:simulate(t))cout << x << endl;
    return 0;
}