#include <bits/stdc++.h>
using namespace std;

int D;
const int N = 26;

int calc(const vector<int> &C, const vector<vector<int>> &S, vector<int> &T, vector<int> &L) {
    int res = 0;
    for(int d = 0; d < D; ++d) {
        res += S[d][T[d]];
        L[T[d]] = d;
        for(int i = 0; i < N; ++i) {
            res -= C[i] * (d - L[i]);
        }
        cout << res << '\n';
    }
    return res;
}

int main() {
    cin >> D;
    vector<int> C(N);
    for(int i = 0; i < N; ++i) cin >> C[i];
    vector<vector<int>> S(D, vector<int>(N));
    for(int i = 0; i < D; ++i) {
        for(int j = 0; j < N; ++j) cin >> S[i][j];
    }
    vector<int> T(D);
    for(int i = 0; i < D; ++i) {
        cin >> T[i];
        T[i]--;
    }

    vector<int> L(N, -1);

    calc(C, S, T, L);
    return 0;
}
