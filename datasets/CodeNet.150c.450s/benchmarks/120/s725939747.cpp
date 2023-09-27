#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    while(cin){
        int r, c;
        cin >> r >> c;
        if (r == 0 && c == 0) break;
        vector<vector<int> > grid(r, vector<int>(c, 0));
        rep(i, r) {
            rep(j, c) {
                cin >> grid[i][j];
            }
        }
        int ans = 0;
        for (int bit = 0; bit < (1 << r); bit++) {
            vector<vector<int> > temp = grid;
            for (int i = 0; i < r; i++) {
                if ((bit >> i) & 1) {
                    for (int j = 0; j < c; j++) {
                        temp[i][j] ^= 1;
                    }
                }
            }
            for (int j = 0; j < c; j++) {
                int count = 0;
                for (int i = 0; i < r; i++) {
                    count += temp[i][j];
                }
                if (count > r / 2) {
                    for (int i = 0; i < r; i++) {
                        temp[i][j] ^= 1;
                    }
                }
            }
            int score = 0;
            rep(i, r) {
                rep(j, c) {
                    // cout << temp[i][j] << " ";
                    score += temp[i][j];
                }
                // cout << endl;
            }
            ans = max(ans, r * c - score);
            // cout << endl;
        }
        cout << ans << endl;
    }
}
