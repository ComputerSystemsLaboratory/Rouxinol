#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using Field = vector<vector<ll>>;
using Graph = vector<vector<ll>>;
using VI = vector<int>;
using VL = vector<ll>;
using VVL = vector<vector<ll>>;
using VC = vector<char>;
using PI = pair<int, int>;

#define FOR(i, s, n) for (int i = s; i < (n); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)
#define ALL(x) x.begin(), x.end()

const long long INF = 1LL<<60;
const int mod = 1000000007;

template<class T> inline bool chmax(T &a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T &a, T b) { if (a > b) { a = b; return true; } return false; }

string A, B;

vector<vector<int>> dp(1010, vector<int>(1010, 10000));

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    cin >> A >> B;


    for (int i = 0; i < A.size(); i++) {
        dp[i][0] = i;
    }


    for (int i = 0; i < B.size(); i++) {
        dp[0][i] = i;
    }

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < B.size(); j++) {
            if (A[i] == B[j]) {
                dp[i + 1][j + 1] = dp[i][j];
            }
            chmin(dp[i + 1][j + 1],dp[i][j + 1] + 1);
            chmin(dp[i + 1][j + 1], dp[i + 1][j] + 1);
            chmin(dp[i + 1][j + 1], dp[i][j] + 1);
        }
    }

    cout << dp[A.size()][B.size()] << endl;





    return 0;
}
