/*
    Problem 92
    https://onlinejudge.u-aizu.ac.jp/problems/1193
*/
#include <bits/stdc++.h>
using namespace std;
/* typedef */
typedef long long ll;
typedef pair<int, int> pii;
/* constant */
const int INF = 1 << 30;
const ll LINF = 1LL << 50;
const int NIL = -1;
const int MAX = 10;
const int mod = 1000000007;
const double pi = 3.141592653589;
/* global variables */
int H;
int W = 5;
vector<vector<int>> pazzle(MAX, vector<int>(W));
/* function */
void init() {
    for (int i = 0; i < MAX; i++) for (int j = 0; j < W; j++)
        pazzle[i][j] = 0;
}
void input() {
    for (int i = 0; i < H; i++) for (int j = 0; j < W; j++)
        cin >> pazzle[i][j];
}
int deleteStone() {
    int ret = 0;
    for (int h = 0; h < H; h++) {
        for (int l = 0; l < W;) {
            int r = l + 1;
            for (; r < W && pazzle[h][l] == pazzle[h][r]; r++);
            if (r - l >= 3) {
                ret += pazzle[h][l] * (r - l);
                for (; l < r; l++) pazzle[h][l] = 0;
            }
            l = r;
        }
    }
    return ret;
}
void moveStone() {
    for (int w = 0; w < W; w++) {
        vector<int> tmp(H, 0);
        int len = 0;
        for (int h = H-1; h >= 0; h--)
            if (pazzle[h][w] != 0) tmp[len++] = pazzle[h][w];
        for (int h = H-1; h >= 0; h--)
            pazzle[h][w] = tmp[H-1-h];
    }
}
void solve() {
    init();
    input();
    int totalScore = 0;
    while (1) {
        int score = deleteStone();
        if (score == 0) break;
        totalScore += score;
        moveStone();
    }
    cout << totalScore << '\n';
}
/* main */
int main(){
    while (1) {
        cin >> H;
        if (H == 0) return 0;
        solve();
    }
}
