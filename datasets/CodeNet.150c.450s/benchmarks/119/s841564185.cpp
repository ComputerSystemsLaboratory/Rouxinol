#include <iostream>
#include <vector>
using namespace std;
using Mat = vector<vector<bool>>;
int w, h;
const int dxy[10] = {0,1,1,1,0,-1,-1,-1,0,1};
void search(const Mat &map, Mat &searched, int x, int y, int dir) {
    if (x < 0 || w <= x || y < 0 || h <= y) {
        return;
    } else if (!map[x][y] || searched[x][y]) {
        return;
    }
    
    searched[x][y] = true;
    
    for (int i = 0; i < 8; ++i) {
        search(map, searched, x + dxy[i], y + dxy[i+2], i);
    }
}
int main(void){
    while (cin >> w >> h && w && h) {
        Mat map(w, vector<bool>(h, false));
        for (int y = 0; y < h; ++y) {
            for (int x = 0; x < w; ++x) {
                int c;
                cin >> c;
                map[x][y] = c;
            }
        }
        Mat searched(w, vector<bool>(h, false));
        int count = 0;
        for (int y = 0; y < h; ++y) {
            for (int x = 0; x < w; ++x) {
                if (searched[x][y] || !map[x][y]) continue;
                search(map, searched, x, y, -1);
                ++count;
            }
        }
        cout << count << endl;
    }
    return 0;
}