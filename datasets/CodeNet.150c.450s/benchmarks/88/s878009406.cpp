#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

typedef long long ll;

int main() {
    vector< array<int, 3> > rects;
    for (int h = 1; h <= 150; h++) {
        for(int w = h + 1; w <= 150; w++) {
            rects.push_back({h*h + w*w, h, w});
        }
    }
    sort(rects.begin(), rects.end());
    while(true) {
        int h, w; cin >> h >> w;
        if(h == 0 && w == 0) break;
        auto ans = *upper_bound(rects.begin(), rects.end(), array<int, 3>{h*h + w*w, h, w});
        cout << ans[1] << ' ' << ans[2] << endl;
    }
}
