#include<iostream>
#include<cstring>

using namespace std;

bool map[21][21];

int main() {
    while (1) {
        int n;
        cin >> n;
        if (n == 0) break;

        memset(map, 0, sizeof(map));

        for (int i = 0; i < n; ++i) {
            int x, y;
            cin >> x >> y;
            map[x][y] = true;
        }

        int m;
        cin >> m;
        int x = 10;
        int y = 10;
        int cnt = 0;
        if (map[10][10]) {
            map[10][10] = false;
            cnt++;
        }

        for (int i = 0; i < m; ++i) {
            char dir;
            int dist;
            cin >> dir >> dist;
            int dx = 0;
            int dy = 0;
            switch(dir) {
                case 'N':
                    dy = 1;
                break;
                case 'S':
                    dy = -1;
                break;
                case 'E':
                    dx = 1;
                break;
                case 'W':
                    dx = -1;
                break;
            }

            for (int k = 0; k < dist; ++k) {
                x += dx;
                y += dy;
                if (map[x][y]) {
                    map[x][y] = false;
                    cnt++;
                }
            }
        }

        cout << (cnt == n ? "Yes" : "No") << endl;
    }
}