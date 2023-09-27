#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

static const int INFTY = 1 << 21;
static const int MAX = 100;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

int n, M[MAX][MAX];

int prim() {
    int u, minv;

    int d[MAX], p[MAX], color[MAX];
    rep(i, n) {
        d[i] = INFTY;
        p[i] = -1;
        color[i] = WHITE;
    }
    d[0] = 0;
    while(1) {
        minv = INFTY;
        u = -1;

        // Tに加える頂点:rを選ぶ
        // 最初はd[0]=0以外はINFTYなので、d[0]が選ばれる
        // 探索を１度でもしている頂点の中から、最小の頂点を選ぶ
        // 探索が行われていない頂点は d[v] にINFTYが入っているため判別可能
        rep(i, n) {
            if(minv > d[i] && color[i] != BLACK) {
                u = i;
                minv = d[i];
            }
        }

        if(u == -1) {
            break;
        }
        color[u] = BLACK;

        // rの辺を調べる
        // ここでは、「コストの更新」を目的にしている　d[v]には頂点:vの辺の中から探索時の最小の値が入っている。
        // ここで計算した各辺のコストを使って、次のループで最小のものをrとして選ぶ
        rep(v, n) {
            if(color[v] != BLACK && M[u][v] != INFTY) {
                if(d[v] > M[u][v]) {
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = GRAY;
                }
            }
        }
    }
    int sum = 0;
    rep(i, n) {
        if(p[i] != -1)
            // 計算した最小の辺を選んで足していく作業
            // どの辺からその頂点にアクセスするのが一番コストが低いのかは
            // p が保持している。
            sum += M[i][p[i]];
    }
    return sum;
}
int main() {
    // 制約見て！！！デカかったらlong longにすること！
    cin >> n;
    rep(i, n) {
        rep(j, n) {
            scanf("%d", &M[i][j]);
            if(M[i][j] == -1) {
                M[i][j] = INFTY;
            }
        }
    }

    cout << prim() << endl;
}
