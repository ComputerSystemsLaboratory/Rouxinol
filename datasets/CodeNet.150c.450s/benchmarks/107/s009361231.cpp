#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define whole(xs) (xs).begin(),(xs).end()

template<class T>
ostream& operator<<(ostream& os, const vector<T>& xs) {
    if (xs.empty()) return os << "[]";
    os << "[" << xs[0];
    for (int i = 1; i < xs.size(); i++) os << ' ' << xs[i];
    return os << "]";
}

const int INF = 1<<28;
int LevenshteinDistance(const string& s, const string& t) {
    const int N = s.size(), M = t.size();
    vector< vector<int> > dp(2, vector<int>(M + 1, INF));
    for (int j = 0; j <= M; j++) dp[0][j] = j;
    for (int i = 1; i <= N; i++) {
        fill(whole(dp[i & 1]), INF);
        dp[i & 1][0] = i;
        for (int j = 1; j <= M; j++) {
            int& v = dp[i & 1][j];
            v = min(v, dp[(i - 1) & 1][j] + 1);
            v = min(v, dp[i & 1][j - 1] + 1);
            v = min(v, dp[(i - 1) & 1][j - 1] + (s[i - 1] != t[j - 1]));
        }
    }
    return dp[N & 1][M];
}

int main() {
    string s, t; cin >> s >> t;
    cout << LevenshteinDistance(s, t) << endl;
    return 0;
}