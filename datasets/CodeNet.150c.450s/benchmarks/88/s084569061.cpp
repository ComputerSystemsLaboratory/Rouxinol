#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main (int argc, char *argv[]) {
    int W, H, aw, ah;
    int min_d = 100000;
    int min_h = 100000;

    while (cin>>H>>W, H||W) {
        // init
        aw = 0;
        ah = 0;
        min_d = 100000;
        min_h = 100000;
        // solve
        int D = W * W + H * H;
        for (int h = 1; h < 151; ++h) {
            for (int w = 1; w < 151; ++w) {
                if (w <= h) continue;
                int d = h * h + w * w;
                // equal
                if (D == d && H < h) {
                    if (h < min_h) {
                        min_d = d;
                        min_h = h;
                        ah = h;
                        aw = w;
                    }
                }
                // diff
                else {
                    if (D < d) {
                        if (d < min_d) {
                            min_d = d;
                            ah = h;
                            aw = w;
                        }
                    }
                }
            }
        }
        cout<<ah<<" "<<aw<<endl;
    }

    return 0;
}