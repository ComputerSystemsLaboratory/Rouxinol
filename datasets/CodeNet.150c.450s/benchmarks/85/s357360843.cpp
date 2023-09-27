#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int p[n+1], m[n][n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &p[i], &p[i+1]);
    }

    for (int i = 0; i < n; i++) { m[i][i] = 0; }

    for (int l = 1; l < n; l++) {
        for (int i = 0; i < n - l; i++) {
            int j = i + l;
            m[i][j] = (1 << 21);
            for (int k = i; k < j; k++) {
                m[i][j] = min(m[i][j], m[i][k] + m[k+1][j] + p[i] * p[k+1] * p[j+1]);
            }
            // printf("m[%d][%d] = %d\n", i, j, m[i][j]);
        }
        // printf("--\n");
    }
    printf("%d\n", m[0][n-1]);
    return 0;
}
