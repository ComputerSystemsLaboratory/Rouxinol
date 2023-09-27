#include<cstdio>
#include<iostream>
#include<algorithm>

#define MAX_N 100
#define MAX_W 10000

struct item {
    int v, w;
};

using namespace std;

item items[MAX_N + 5];
int T[MAX_N + 5][MAX_W + 5];

int main()
{
    int n, w, i, j;
    scanf("%d %d", &n, &w);
    for (i = 1; i <= n; i++) {
        scanf("%d %d", &(items[i].v), &(items[i].w));
    }
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= w; j++) {
            T[i][j] = 0;
        }
    }
    for (i = 1; i <= n; i++) {
        for (j = 0; j <= w; j++) {
            if (j < items[i].w) {
                T[i][j] = T[i - 1][j];
            }
            else {
                T[i][j] = max(T[i - 1][j], T[i - 1][j - items[i].w] + items[i].v);
            }
        }
    }
    printf("%d\n", T[n][w]);

    return 0;
}