#include <cstdio>

const int MAXN = 100;
const char FINISHED = '.';
const int STEP_NUM = 4;
const int STEP[STEP_NUM][STEP_NUM] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

int h, w;
char fruit_map[MAXN + 1][MAXN + 1];

void DFS(int x, int y) {
    char fruit = fruit_map[x][y];
    fruit_map[x][y] = FINISHED;
    for (int i = 0; i < STEP_NUM; i++) {
        int newx = x + STEP[i][0];
        int newy = y + STEP[i][1];
        if (0 <= newx && newx < h && 0 <= newy && newy < w
            && fruit_map[newx][newy] == fruit) {
            DFS(newx, newy);
        }
    }
}

int main() {
    scanf("%d %d", &h, &w);
    while (h * w != 0) {
        int districts = 0;
        for (int i = 0; i < h; i++) {
            scanf("%s", fruit_map[i]);
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (fruit_map[i][j] != FINISHED) {
                    DFS(i, j);
                    districts++;
                }
            }
        }
        printf("%d\n", districts);
        scanf("%d %d", &h, &w);
    }

    return 0;
}