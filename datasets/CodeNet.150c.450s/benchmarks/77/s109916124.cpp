#include <iostream>

using namespace std;

int main() {
    int N, M;
    int x, y, t;
    char d[2];
    bool table[21][21], flag;

    while (cin >> N) {
        if (!N) { break; }

        for (int i = 0; i < 21; i++) {
            for (int j = 0; j < 21; j++) { table[i][j] = false; }
        }

        for (int i = 0; i < N; i++) {
            cin >> x >> y;
            table[x][y] = true;
        }

        x = 10; y = 10;
        cin >> M;

        while (M--) {
            cin >> d >> t;
            if (d[0] == 'N') {
                for (int i = 0; i < t; i++) {
                    table[x][++y] = false;
                }
            }
            if (d[0] == 'E') {
                for (int i = 0; i < t; i++) {
                    table[++x][y] = false;
                }
            }
            if (d[0] == 'S') {
                for (int i = 0; i < t; i++) {
                    table[x][--y] = false;
                }
            }
            if (d[0] == 'W') {
                for (int i = 0; i < t; i++) {
                    table[--x][y] = false;
                }
            }
        }

        flag = true;

        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 20; j++) {
                if (table[i][j]) {
                    flag = false;
                    break;
                }
            }
        }
        cout << (flag ? "Yes" : "No") << endl;
    }
    return 0;
}
