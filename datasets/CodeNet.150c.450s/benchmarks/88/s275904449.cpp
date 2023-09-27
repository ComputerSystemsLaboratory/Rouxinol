#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int INF = 1000000007;

    while (1) {
        int H, W;
        cin >> H >> W;
        if (!H & !W) break;
        int ansH = H, ansW = W, Diagonal = H * H + W * W, miD = INF;
        for (int h = 1; h <= 150; h++) {
            for (int w = h + 1; w <= 150; w++) {
                if (h == H && w == W) continue;
                if (h * h + w * w >= Diagonal && h * h + w * w < miD) {
                    if (h * h + w * w == Diagonal && h < H) continue;
                    // cout << h << " " << w << endl;
                    miD = h * h + w * w;
                    ansH = h;
                    ansW = w;
                }
            }
        }
        cout << ansH << " " << ansW << endl;
    }
}
