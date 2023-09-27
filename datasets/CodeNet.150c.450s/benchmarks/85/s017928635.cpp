#include <bits/stdc++.h>
using namespace std;

// (n, m) @ (m, k) = (n, k)のとき、スカラー乗算の回数はn*m*k回
// 最適な分割を探していく

struct matrix
{
    int r, c;
};

int min_chain_mul(vector<matrix> M) {
    int c[M.size() + 1][M.size() + 1];
    for (int i = 1; i <= M.size(); i++) {
        c[i][i] = 0;
    }

    for (int l = 2; l <= M.size(); l++) { // span
        for (int i = 1; i <= M.size() - l + 1; i++) {
            int j = i + l -1;
            c[i][j] = (1 << 21);
            for (int k = i; k <= j - 1; k++) {
                c[i][j] = min(c[i][j], c[i][k]+c[k+1][j] + M.at(i-1).r * M.at(k-1).c * M.at(j-1).c);
            }
        }
    }
    // for (int i = 1; i <= M.size(); i++)
    //     cout << c[i][i+1] << endl;
    return c[1][M.size()];
}

int main() {
    int n;
    cin >> n;

    vector<matrix> M;
    for (int i = 0; i < n; i++)
    {
        matrix m;
        cin >> m.r >> m.c;
        M.push_back(m);
    }

    cout<< min_chain_mul(M) << endl;
}
