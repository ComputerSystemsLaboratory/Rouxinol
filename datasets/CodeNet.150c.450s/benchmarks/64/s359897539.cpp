#include<cstdio>

#define MAX 100

int num[MAX], N;

bool solve(int i, int m)
{
    if (0 == m) return true;
    if (i >= N) return false;
    return ((solve(i + 1, m)) || (solve(i + 1, m - num[i])));
}

int main()
{
    int i, j, k;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &k);
    for (i = 0; i < k; i++) {
        scanf("%d", &j);
        if (solve(0, j)) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}