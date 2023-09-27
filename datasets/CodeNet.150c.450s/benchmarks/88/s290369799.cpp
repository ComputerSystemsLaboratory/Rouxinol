#include <bits/stdc++.h>
 
using namespace std;
 
#define INF (1<<29)
 
int main()
{
    int H, W;
    while (cin >> H >> W, H) {
        int D = H * H + W * W;
        int min_d = INF, ans_h = INF, ans_w = INF;        
        for (int w = 1; w <= 150 ; w++) {
            for (int h = 1; h < w; h++) {
                int d = h * h + w * w;
                if (D > d) continue;                    
                if (d < min_d) {
                    if (D == d) {
                        if (H < h) {
                            min_d = d;
                            ans_h = h;
                            ans_w = w;
                        }
                    } else {
                        min_d = d;
                        ans_h = h;
                        ans_w = w;
                    }                        
                } else if (d == min_d) {
                    if (D == d) {
                        if (H < h && h < ans_h) {
                            ans_h = h;
                            ans_w = w;
                        }
                    } else {
                        if (h < ans_h) {
                            ans_h = h;
                            ans_w = w;
                        }
                    }
                }
            }
        }
        cout << ans_h << " " << ans_w << endl;
    }
    return 0;
}