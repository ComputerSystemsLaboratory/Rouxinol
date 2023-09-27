#include <cstdio>

using namespace std;

#define MAX 100
int n, AM[MAX][MAX];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int u, k;
        scanf("%d%d", &u, &k);
        for (int j = 1; j <= k; ++j) {
            int vi;
            scanf("%d", &vi);
            AM[i][vi - 1] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j)
                printf(" ");
            printf("%d", AM[i][j]);
        }
        printf("\n");
    }
}