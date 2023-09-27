#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

#define vi vector<int>
#define vl vector<long long>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REPD(i, n) for (int i = (int)(n-1); i >= 0; i--)
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define FORD(i, a, b) for (int i = (int)(a); i >= (int)(b); i--)
#define INF 1e18
#define MOD 1e9+7

template<class T> bool chmax(T &a, const T & b) {
    if (a<b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> bool chmin(T &a, const T & b) {
    if (a>b) {
        a = b;
        return true;
    }
    return false;
}

const int MAX_N = 110;
ll dp[MAX_N][MAX_N];
int p[MAX_N];

ll rec(int i, int j) {
    if (dp[i][j] >= 0) return dp[i][j];
    if (i == j) return dp[i][j] = 0;
    ll res = INF;
    FOR(k, i, j) {
        chmin(res, rec(i, k)+rec(k+1, j)+p[i-1]*p[k]*p[j]);
    }
    return dp[i][j] = res;
}

int main() {
    int n;
    cin >> n;
    int r, c;
    REP(i, n) {
        cin >> r >> c;
        p[i] = r;
    }
    p[n] = c;
    REP(i, n+1) {
        REP(j, n+1) {
            dp[i][j] = -1;
        }
    }
    cout << rec(1, n) << endl;
    return 0;
}
