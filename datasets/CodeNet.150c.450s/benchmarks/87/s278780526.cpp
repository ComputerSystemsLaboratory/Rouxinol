#include "bits/stdc++.h"
using namespace std;

void solve(int H) {
        int i, j;
        vector<vector<int> > block(H, vector<int> (5));
        for (i = H - 1; i >= 0; i --) {
                for (j = 0; j < 5; j ++) {
                        cin >> block[i][j];
                }
        }
        int ans = 0;
        for (int l = 0; l < 100; l ++) {
                for (i = 0; i < H; i ++) {
                        int p = block[i][2];
                        int l = 1, r = 3;
                        while (block[i][l] == p) l --;
                        while (block[i][r] == p) r ++;
                        l ++, r --;
                        if (r - l + 1 >= 3) { 
                                for (j = l; j < r + 1; j ++) block[i][j] = 0;
                                ans += p * (r - l + 1);
                        }
                }
                for (i = 0; i < 5; i ++) {
                        for (int k = 0; k < 10; k ++) {
                                for (j = 0; j < H; j ++) {
                                        if (block[j][i] == 0 && j != H - 1) {
                                                swap(block[j][i], block[j + 1][i]);
                                        }
                                }
                        }
                }
        }
        cout << ans << endl;
}

int main() {
        int H;
        while (cin >> H) {
                if (H == 0) break;
                solve(H);
        }
        return 0;
}