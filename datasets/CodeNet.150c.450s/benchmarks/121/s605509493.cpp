#include <cstdio>

const int MAX_H = 103;
const int MAX_W = 103;
const char X = 'X';

char dp[][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

void readline(char line[]) {
    int ch, i = 0;
    while ((ch = getchar()) && ch != EOF && ch != '\n') {
        line[i++] = ch;
    }
    line[i] = '\0';
}

char field[MAX_H][MAX_W];
int H, W;

void dfs(int h, int w) {
    char CH = field[h][w];
    field[h][w] = X;

    for (int i = 0; i < 4; ++i)
    {
        int dh = dp[i][0], dw = dp[i][1];
        char c = field[h+dh][w+dw];
        if (c != X && c == CH)
            dfs(h+dh, w+dw);
    }
}

int main(int argc, char const *argv[])
{
    scanf("%d %d\n", &H, &W);
    while (H && W) {
        for (int i = 0; i < W+2; ++i)
        {
            field[0][i] = field[H+1][i] = X;
        }

        for (int i = 1; i < H+1; ++i)
        {
            readline(&field[i][1]);
            field[i][0] = field[i][W+1] = X;
        }

        int count = 0;
        for (int i = 0; i < H+2; ++i)
        {
            for (int j = 0; j < W+2; ++j)
            {
                if (field[i][j] != X) {
                    count++;
                    dfs(i, j);
                }
            }
        }

        printf("%d\n", count);
        scanf("%d %d\n", &H, &W);
    }

    return 0;
}