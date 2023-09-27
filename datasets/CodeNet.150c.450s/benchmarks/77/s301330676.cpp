// AOJ 2000 "Misterious Gems" (ICPC模擬国内予選 2006 Problem A)
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    while (true) {
        int field[21][21]; // フィールドの縦、横の座標
        int N; // 宝石の個数
        int M; // 命令の個数
        int positionX = 10; // ロボットの位置のx座標
        int positionY = 10; // ロボットの位置のy座標
        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        memset(field, 0, sizeof(field));
        
        cin >> N;
        if (N == 0) {
            break;
        }
        for (int i = 0; i < N; i++) {
            int x, y;
            cin >> x >> y;
            field[y][x] = 1;
        }
        
        cin >> M;
        for (int i = 0; i < M; i++) {
            char direction;
            int dir;
            int distance;
            cin >> direction >> distance;
            switch (direction) {
            case 'N':
                dir = 0;
                break;
            case 'E':
                dir = 1;
                break;
            case 'S':
                dir = 2;
                break;
            case 'W':
                dir = 3;
                break;
            }
            for (int j = 0; j < distance; j++) {
                positionX += dx[dir];
                positionY += dy[dir];
                field[positionY][positionX] = 0;
            }
        }
        
        bool ans = true;
        for (int i = 0; i < 21; i++) {
            for (int j = 0; j < 21; j++) {
                if (field[i][j] == 1) {
                    ans = false;
                }
            }
        }
        if (ans) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}