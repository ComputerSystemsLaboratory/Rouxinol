#include <bits/stdc++.h>
using namespace std;
#define REP(i,n) for (int i=0;i<(n);i++)
#define REP2(i,m,n) for (int i=m;i<(n);i++)

int A[1000];
int dp1[1000001];
int dp2[1000001];

int main() {
    A[0] = 0;
    A[1] = 1;
    REP2(i, 1, 200) A[i+1] = A[i] * (i+3) / i;

    dp1[0] = 0;
    dp1[1] = 1;
    REP2(i, 2, 1000001) dp1[i] = 1 << 29;
    REP2(i, 2, 1000001) REP(j, 200) {
        if (i < A[j]) break;
        dp1[i] = min(dp1[i], dp1[i-A[j]] + 1);
    }

    dp2[0] = 0;
    dp2[1] = 1;
    REP2(i, 2, 1000001) dp2[i] = 1 << 29;
    REP2(i, 2, 1000001) REP(j, 200) {
        if (i < A[j]) break;
        if (A[j] % 2 == 0) continue;
        dp2[i] = min(dp2[i], dp2[i-A[j]] + 1);
    }

    
    while (true) {
        int N;
        cin >> N;
        if (N == 0) break;
        cout << dp1[N] << " " << dp2[N] << endl;
    }
}