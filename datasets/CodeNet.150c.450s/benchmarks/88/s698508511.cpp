#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(int)(n); ++i)

using namespace std;

int main(){
    int h, w;
    while(cin >> h >> w && h > 0){
        auto p = make_pair(h * h + w * w, h);
        auto min_p = make_pair(INT_MAX, INT_MAX);
        int ans_x = -1, ans_y = -1;
        for(int y = 1; y <= 200; y++) {
            for(int x = y + 1; x <= 200; x++) {
                auto q = make_pair(y * y + x * x, y);
                if(q > p && q < min_p) {
                    min_p = q;
                    ans_x = x;
                    ans_y = y;
                }
            }
        }
        cout << ans_y << " " << ans_x << endl;
    }
    return 0;
}