#include <iostream>
#include <map>
using namespace std;

int main(void) {
    int n, i, j, k, cnt;
    char dir;
    map<char, int> dtoi;
    dtoi['N'] = 0; dtoi['E'] = 1; dtoi['S'] = 2; dtoi['W'] = 3;
    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};

    while (1) {
        cin >> n;
        if (!n) break;

        int field[21][21];
        int x = 10, y = 10;

        for (i = 0; i < 21; i++) {
            for (j = 0; j < 21; j++) {
                field[i][j] = 0;
            }
        }

        for (k = 0; k < n; k++) {
            cin >> i >> j;
            field[i][j] = 1;
        }

        cin >> n;
        for (k = 0; k < n; k++) {
            cin >> dir >> i;
            for (j = 0; j < i; j++) {
                x += dx[dtoi[dir]];
                y += dy[dtoi[dir]];
                field[x][y] = 0;
            }
        }

        bool flag = true;
        for (i = 0; i < 21; i++) {
            for (j = 0; j < 21; j++) {
                if (field[i][j]) {
                    flag = false;
                    break;
                }
            }
            if (!flag) break;
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}