#include <cstdio>

int solve(int n, int x);
int main() {
    while(1) {
        int n, x;
        scanf("%d %d", &n, &x);
        if (n == 0 && x == 0) break;
        printf("%d\n", solve(n, x));
    }
    return 0;
}

int solve(int n, int x) {
    int count = 0;
    for (int i=1; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            int c = x - (i + j);
            if (j < c && c <= n) count++;
        }
    }
    return count;
}