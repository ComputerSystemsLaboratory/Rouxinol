// 1186.cpp - Integral Rectangles
#include <iostream>
using namespace std;

inline bool lt(int h1, int w1, int h2, int w2)
{
    int d1 = h1 * h1 + w1 * w1;
    int d2 = h2 * h2 + w2 * w2;

    if (d1 != d2)
        return d1 < d2;
    return h1 < h2;
}

int main()
{
    ios::sync_with_stdio(false);

    int H, W;
    while (cin >> H >> W, H | W) {
        int ans_h = 150, ans_w = 150;

        for (int w = 1; w <= 150; ++w) {
            for (int h = 1; h < w; ++h) {
                if (lt(H, W, h, w) && lt(h, w, ans_h, ans_w)) {
                    ans_h = h;
                    ans_w = w;
                }
            }
        }

        cout << ans_h << " " << ans_w << endl;
    }
}