#include <iostream>
#include <cstring>
using namespace std;

bool field[22][22];

struct point {
    int x, y;
};

int main() {
    int N;
    while (cin >> N, N != 0) {
        memset(field, 0, sizeof(field));
        int x, y;
        for (int i = 0; i < N; i++) {
            cin >> x >> y;
            field[y][x] = true;
        }
        int M; cin >> M;
        point cur; cur.x = 10; cur.y = 10;
        int count = 0;
        if (field[cur.y][cur.x]) {
            count++;
            field[cur.y][cur.x] = false;
        }
        for (int i = 0; i < M; i++) {
            char dir;
            int distance;
            cin >> dir >> distance;
            for (int j = 0; j < distance; j++) {
                switch (dir) {
                    case 'N':
                        cur.y++;
                        break;
                    case 'W':
                        cur.x--;
                        break;
                    case 'S':
                        cur.y--;
                        break;
                    case 'E':
                        cur.x++;
                        break;
                }
//                cout << cur.x << ' ' << cur.y << endl;
                if (field[cur.y][cur.x]) {
                    field[cur.y][cur.x] = false;
                    count++;
                }
            }
        }
        bool flag = true;
        for (int i = 0; i <= 20; i++) {
            for (int j = 0; j <= 20; j++) {
//                cout << field[i][j] << ' ';
                if (field[i][j]) {
                    flag = false;
                    break;
                }
            }
//            cout << endl;
        }
        if (flag) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}