#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;


int n;
int m[101][101];
int p[101];

void matrixChainMultiplication() {
    for(int i = 1; i <= n; i++) {
        m[i][i] = 0;
    }

    for(int l = 2; l <= n; l++) {
        for(int i = 1; i <= n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = (1<<21);
            for(int k = i; k < j ; k++) {
                m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1]*p[k]*p[j]);
            }
        }
    }
    cout << m[1][n] << endl;
}

int main() {
    // 制約見て！！！デカかったらlong longにすること！
    cin >> n;
    int _;
    rep(i, n) {
        if(i == 0) {
            scanf("%d %d", &p[i], &p[i + 1]);
        } else {
            scanf("%d %d", &_, &p[i + 1]);
        }
    }
    matrixChainMultiplication();
    return 0;
}
