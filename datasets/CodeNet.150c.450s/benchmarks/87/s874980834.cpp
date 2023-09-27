#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for(int i=0; i<(n); i++)
#define REP2(i,x,n) for(int i=x; i<(n); i++)
#define PRINT(x) cout<<(x)<<endl
#define INF 1000000000000 // 10^12
#define MOD 1000000007 // 10^9+7
#define PB push_back
#define MP make_pair

const int MAX_H = 10;
const int W = 5;

int H, stone[MAX_H][W];

bool to_disappear[MAX_H][W];
int next_stone_row[MAX_H][W];

bool detect_chain();
void make_next_stone_row();
void update_stone();
void print_stone();
int solve();

int main() {
    while (true) {
        cin >> H;
        if (H == 0) break;
        REP(i, H) REP(j, W) cin >> stone[i][j];

        int score = solve();
        PRINT(score);
    }
    return 0;
}

bool detect_chain() {
    bool exist_chain = false;
    REP(i, H) REP(j, W) to_disappear[i][j] = false;

    REP(i, H) { // i行目
        for (int j = W; j >= 3; j--) { // j個連続
            for (int k = 0; k + j - 1 < W; k++)  { // k列目を起点
                bool is_chain = true;
                if (stone[i][k] == -1) is_chain = false;
                REP(l, j-1) { // k+l列目とk+l+1列目の比較
                    if (stone[i][k+l] != stone[i][k+l+1]) is_chain = false;
                }

                if (is_chain) {
                    exist_chain = true;
                    REP(l, j) to_disappear[i][k+l] = true;
                }
            }
        }
    }
    return exist_chain;
}

void make_next_stone_row() {
    for (int i = H-1; i >= 0; i--) {
        REP(j, W) {
            if (i == H-1) next_stone_row[i][j] = H-1;
            else next_stone_row[i][j] = max(next_stone_row[i+1][j] - 1, -1);
            while (true) {
                if (next_stone_row[i][j] == -1) break;
                if (to_disappear[next_stone_row[i][j]][j] == false) break;
                next_stone_row[i][j]--;
            }
        }
    }
    return;
}

void update_stone() {
    for (int i = H-1; i >= 0; i--) {
        REP(j, W) {
            if (next_stone_row[i][j] == -1) stone[i][j] = -1;
            else stone[i][j] = stone[next_stone_row[i][j]][j];
        }
    }
    return;
}

void print_stone() {
    REP(i, 32) printf("-");
    printf("\n");
    REP(i, H) {
        REP(j, W) printf("%d\t", stone[i][j]);
        printf("\n");
    }
}

int solve() {
    int score = 0;
    REP(i, H) REP(j, W) score += stone[i][j];
    while (true) {
        // print_stone();
        if (!detect_chain()) break;
        make_next_stone_row();
        update_stone();
    }
    REP(i, H) REP(j, W) if (stone[i][j] != -1) score -= stone[i][j];
    return score;
}
