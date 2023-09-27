#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const ll INF = 1LL << 60;
const int MAX = 1000000010;
const ll MOD = 1000000007;

int main() {
    int D; cin >> D;
    vector<int> C(26 + 1);
    for (int i = 1; i <= 26; i++) scanf("%d", &C[i]);
    vector<vector<int>> S(D + 1, vector<int>(26 + 1));
    for (int i = 1; i <= D; i++) {
        for (int j = 1; j <= 26; j++) scanf("%d", &S[i][j]);
    }

    ll sum = 0;
    vector<int> last(26 + 1);
    for (int d = 1; d <= D; d++) {
        int t; cin >> t;
        sum += S[d][t];
        last[t] = d;
        for (int i = 1; i <= 26; i++) {
            sum -= C[i] * (d - last[i]);
        }
        cout << sum << endl;
    }

    return 0;
}