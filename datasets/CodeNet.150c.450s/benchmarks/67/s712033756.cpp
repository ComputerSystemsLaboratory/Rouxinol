#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for (int i=0;i<(n);i++)
#define REP2(i,m,n) for (int i=m;i<(n);i++)

int A[101010];

int main() {
    memset(A, 0, sizeof(A));
    REP2(i, 1, 1001) {
        int tmp = i;
        REP2(j, i+1, 1001) {
            tmp += j;
            if (tmp <= 1000) A[tmp] += 1;
        }
    }

    while (1) {
        int N; cin >> N;
        if (N == 0) break;
        cout << A[N] << endl;
    }

    return 0;
}