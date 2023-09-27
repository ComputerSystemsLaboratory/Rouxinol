#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
#include <cmath>

using ll = long long;

using namespace std;

int main() {
    while (true) {
        int h, w; cin >> h >> w;
        if (h == 0) break;
        h++;
        bool done = false;
        for (int x = (h-1) * (h-1) + w * w; true; x++, h = 1) {
            for ( ; h <= 100 && h * h < x; h++) {
                w = sqrt(x - h * h);
                if (w <= h) break;
                if (x == h * h + w * w) {
                    done = true;
                    break;
                }
            }
            if (done) break;
        }
        cout << h << ' ' << w << '\n';
    }
    return 0;
}
