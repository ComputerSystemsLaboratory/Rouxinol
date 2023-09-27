#include <cstdio>

int main()
{
        int w, n;
        int lot[30][30];
        int goal[30];

        scanf("%d", &w);
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < w; j++) {
                        lot[i][j] = -1;
                }
        }
        int a, b;
        for (int i = 0; i < n; i++) {
                scanf("%d,%d", &a, &b);
                lot[i][a - 1] = b - 1;
                lot[i][b - 1] = a - 1;
        }
        for (int i = 0; i < w; i++) {
                int cur = i;
                for (int j = 0; j < n; j++) {
                        if (lot[j][cur] >= 0) {
                                cur = lot[j][cur];
                        }
                }
                goal[cur] = i + 1;
        }
        for (int i = 0; i < w; i++) {
                printf("%d\n", goal[i]);
        }

        return 0;
}