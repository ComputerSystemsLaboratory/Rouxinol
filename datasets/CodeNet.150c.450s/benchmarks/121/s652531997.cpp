#include <iostream>
#include <string>

using namespace std;

int H, W;
string field[100];
int numberField[100][100];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void dfs(int x, int y, char t, int number) {
    if (numberField[y][x] == -1) {
        numberField[y][x] = number;
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (0 <= nx && nx < W && 0 <= ny && ny < H && field[ny][nx] == t) {
                dfs(nx, ny, t, number);
            }
        }
    }
}

int main() {
    while (true) {
        cin >> H >> W;
        if (H == 0 && W == 0) {
            return 0;
        }

        for (int i = 0; i < H; ++i) {
            cin >> field[i];
        }
        for (int i = 0; i < 100; ++i) {
            for (int j = 0; j < 100; ++j) {
                numberField[i][j] = -1;
            }
        }

        int count = 0;
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                if (numberField[i][j] == -1) {
                    dfs(j, i, field[i][j], count++);
                }
            }
        }

        cout << count << endl;
    }
}