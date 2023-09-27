#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

const int ALP_NUM = 26;

int main() {
    int d;
    cin >> d;
    vector<int> C(ALP_NUM);
    rep(i, ALP_NUM) cin >> C[i];
    vector<vector<int>> S(d, vector<int>(ALP_NUM));
    rep(i, d) rep(j, ALP_NUM) cin >> S[i][j];

    auto get_score = [&](vector<int> A, int n) {
        int res = 0;
        vector<int> D(ALP_NUM, -1);
        rep(i, n) {
            int t = A[i];
            res += S[i][t];
            D[t] = i;
            rep(j, ALP_NUM) {
                res -= (i-D[j]) * C[j];
            }
        }
        return res;
    };

    vector<int> ans(d);
    rep(i, d) cin >> ans[i];
    rep(i, d) --ans[i];
    rep(i, d) {
        cout << get_score(ans, i+1) << endl;
    }
    return 0;
}