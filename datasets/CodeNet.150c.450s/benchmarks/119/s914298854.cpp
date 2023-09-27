#include <iostream>

using namespace std;

int w, h;
int dx[] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};
int map_[50][50];

int sink(int x, int y) {
    if (map_[x][y] == 0) {
        return 0;
    }
    map_[x][y] = 0;
    for (int i=0; i<8; i++) {
        int x_new = x+dx[i];
        int y_new = y+dy[i];
        if (0 <= x_new && x_new < w && 0 <= y_new && y_new < h) {
            sink(x_new, y_new);
        }
    }
    return 1;
}

int main() {
    while (true) {
        int count = 0;
        cin >> w >> h;
        if (w == 0) {
            break;
        }
        for (int i=0; i<h; i++) {
            for (int j=0; j<w; j++) {
                cin >> map_[j][i];
            }
        }
        for (int i=0; i<h; i++) {
            for (int j=0; j<w; j++) {
                count += sink(j, i);
            }
        }
        cout << count << endl;
    }
    return 0;
}