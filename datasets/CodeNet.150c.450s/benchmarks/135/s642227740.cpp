#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for (int i=0;i<(n);i++)
#define REP2(i,m,n) for (int i=m;i<(n);i++)

const int MAX = 1500 * 1000 + 1;
int N, M;
int H[2020];
int W[2020];
ll A[MAX];
ll B[MAX];

bool solve() {
    cin >> N >> M;
    REP(i, N) cin >> H[i];
    REP(i, M) cin >> W[i];
    if (N == 0) return false;

    REP(i, N) {
        int tmp = 0;
        REP2(j, i, N) {
            tmp += H[j];
            A[tmp] += 1;
        }
    }
    
    REP(i, M) {
        int tmp = 0;
        REP2(j, i, M) {
            tmp += W[j];
            B[tmp] += 1;
        }
    }

    ll ans = 0;
    REP(i, MAX) {
        ans += A[i] * B[i];
    }
    cout << ans << endl;

    memset(A, 0, sizeof(A));
    memset(B, 0, sizeof(B));
    return true;
}

int main() {
    while (solve());
}

