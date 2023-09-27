#include<iostream>
#include<cmath>

using namespace std;

int main() {
    while (1) {
        int h, w;
        cin >> h >> w;
        if (h == 0 && w == 0) break;
        int m = h * h +  w * w;
        bool end = false;
        for (int m = h * h + w * w; m <= 45000; ++m) {
            //cout << m << endl;
            int bh = m == h * h + w * w ? h + 1 : 1;
            for (; bh <= 150; ++bh) {
                
                if (m > bh * bh) {
                    int r = m - bh * bh;
                    int bw = int(floor(sqrt(r)));
                    //cout << bh << " " << bw << endl;
                    if (bw * bw == r) {
                        if (bw <= bh) break;
                        cout << bh << " " << bw << endl;
                        end = true;
                        break;
                    }
                }
            }
            if(end)break;
        }
        
    }
}
