#include<cstdio>
#include<algorithm>

#define MAX_M 20
#define MAX_N 50000
#define MAX_NUM 20000

using namespace std;

int C[MAX_M + 5], T[MAX_N + 5];

int main()
{
    int m, n, i, j;
    scanf("%d %d", &n, &m);
    for (i = 0; i < m; i++) {
        scanf("%d", &C[i]);
    }
    T[0] = 0;
    for (i = 1; i <= n; i++) {
        T[i] = MAX_NUM;
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j + C[i] <= MAX_N; j++) {
            if (T[j] + 1 < T[j + C[i]]) {
                T[j + C[i]] = T[j] + 1;
            }
        }
    }
    printf("%d\n", T[n]);

    return 0;
}