#include <algorithm>
#include <iostream>
#include <vector>

#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ALL(a) (a).begin(), (a).end()

#define INF 1000000000

using namespace std;

int scoring(const vector<int> &c,
            const vector<vector<int>> &s,
            int day,
            int type,
            const vector<int> &previous) {
    int score = s[day][type];

    REP(i, 26) {
        score -= c[i] * (day + 1 - previous[i]);
    }

    return score;
}

int main() {
    int D;
    cin >> D;

    vector<int> c(26);
    REP(i, 26)
        cin >> c[i];

    vector<vector<int>> s(D, vector<int>(26, 0));
    REP(i, D)
        REP(j, 26)
            cin >> s[i][j];

    vector<int> result(D);
    REP(i, D) {
        cin >> result[i];
        result[i]--;
    }

    vector<int> previous(26, 0);

    long long score = 0;
    REP(i, D) {
        previous[result[i]] = i + 1;
        score += scoring(c, s, i, result[i], previous);
        cout << score << endl;
    }

    return 0;
}
