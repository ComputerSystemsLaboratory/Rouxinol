#include <bits/stdc++.h>
using namespace std;
#define PRINT(s) cout << s << endl;
#define FOR(i, a, b) for (unsigned int i = (a); i < (b); i++)
#define REP(i, n) FOR((i), 0, (n))

int contestsCount = 26;
int d;
vector<long long> c(contestsCount, 0);
vector<vector<long long>> s;
vector<int> t;
vector<int> lastDate(contestsCount, 0);

long long lastDateScore(int currentDate) {
    long long score = 0;
    REP(i, contestsCount) {
        score += c[i] * (currentDate - lastDate[i]);
    }
    return score;
}

long long scoring(int currentDateIndex, int contestNumber) {
    return s[currentDateIndex][contestNumber] - lastDateScore(currentDateIndex + 1);
}

int main() {
    cin >> d;
    REP(i, contestsCount) {
        cin >> c[i];
    }
    REP(i, d) {
        vector<long long> score(contestsCount);
        REP(j, contestsCount) {
            cin >> score[j];
        }
        s.push_back(score);
    }
    t = vector<int>(d);
    REP(i, d) {
        cin >> t[i];
    }
    long long totalScore = 0;
    REP(i, d) {
        lastDate[t[i] - 1] = i + 1;
        totalScore += scoring(i, t[i] - 1);
        PRINT(totalScore);
    }
}
