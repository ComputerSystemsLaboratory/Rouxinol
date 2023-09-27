#include <iostream>
using namespace std;

int sq(int x) {
    return x * x;
}

int main() {
    int h, w;
    while (cin >> h >> w, h | w) {
        int d = h * h + w * w,
            ans_d = 100000000,
            ans_h = 1000, ans_w;
        for (int w_i = 1; w_i <= 150; w_i++) {
            for (int h_i = 1; h_i <= 150; h_i++) {
                if (w_i <= h_i) continue;
                if (w_i == w && h_i == h) continue;
                int d2 = sq(w_i) + sq(h_i);
                if (d2 < d) continue;

                if (d2 == d && h_i <= h) {
                    continue;
                }

                if (ans_d > d2) {
                    ans_h = h_i;
                    ans_w = w_i;

                    ans_d = sq(ans_h) + sq(ans_w);
                } else if (ans_d == d2 && ans_h > h_i) {
                    ans_h = h_i;
                    ans_w = w_i;

                    ans_d = sq(ans_h) + sq(ans_w);
                }
            }
        }
        cout << ans_h << " " << ans_w << endl;
    }
    return 0;
}