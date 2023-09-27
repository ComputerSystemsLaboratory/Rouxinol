#include <iostream>
#include <vector>
using namespace std;

int main() {
    while (true) {
        int H;
        cin >> H;
        if (H == 0) break;
        vector<vector<int>> P(H, vector<int>(5));
        for (int i = 0; i < H; ++i) cin >> P[i][0] >> P[i][1] >> P[i][2] >> P[i][3] >> P[i][4];
        
        int score = 0;
        while (true) {
            // 消えるかどうか判定
            vector<vector<bool>> D(H, vector<bool>(5));
            bool judge = false;
            for (int i = 0; i < H; ++i) {
                for (int j = 0; j < 3; ++j) {
                    if (P[i][j] == P[i][j + 1] && P[i][j + 1] == P[i][j + 2] && P[i][j] != 0) {
                        judge = true;
                        D[i][j] = true;
                        D[i][j + 1] = true;
                        D[i][j + 2] = true;
                    }
                }
            }
            if (!judge) break;
            
            // 消す
            for (int i = 0; i < H; ++i) {
                for (int j = 0; j < 5; ++j) {
                    if (D[i][j]) {
                        score += P[i][j];
                        P[i][j] = 0;
                    }
                }
            }
            
            // 落とす
            for (int i = 0; i < H; ++i) {
                for (int j = 0; j < H - 1; ++j) {
                    for (int k = 0; k < 5; ++k) {
                        if (P[j + 1][k] == 0) {
                            P[j + 1][k] = P[j][k];
                            P[j][k] = 0;
                        }
                    }
                }
            }
        }
        
        cout << score << endl;
    }
    return 0;
}
