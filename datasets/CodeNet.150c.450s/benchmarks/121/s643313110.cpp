#include <cstdio>
#include <map>
#include <queue>
#include <cstring>

#define PRINTF(...) 

int h, w;
char area[100][100];

void visualize() {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            PRINTF("%c", area[i][j]);
        }
        PRINTF("\n");
    }
}

void replace(char c, int i, int j) {
    int dirs[][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    if (i < 0 || i >= h || j < 0 || j >= w || area[i][j] != c) {
        return;
    }
    area[i][j] = '.';
    for (int k = 0; k < 4; k++) {
        replace(c, i + dirs[k][0], j + dirs[k][1]);
    }

}

int solve() {
    char buf[4096];
    int count = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (area[i][j] != '.') {
                count++;
                replace(area[i][j], i, j);
            }
        }
    }
    return count;
}

int main() {
    while (true) {
        scanf(" %d %d", &h, &w);
        PRINTF("h: %d w: %d\n", h, w);
        if (h == 0 && w == 0)
            break;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (scanf(" %c", &area[i][j]) == EOF) 
                    return 0;
            }
        }
        printf("%d\n", solve());
    }

}