#include <cstdio>

int n;

bool solve(int *balls, int i, int depth, int left, int right) {
    if (i == depth)
        return true;
    if (left < balls[i] 
            && solve(balls, i+1, depth, balls[i], right))
        return true;
    if (right < balls[i]
            && solve(balls, i+1, depth, left, balls[i]))
        return true;
    return false;
}

int main() {
    scanf(" %d", &n);
    for (int i = 0; i < n; i++) {
        int balls[10];
        for (int j = 0; j < 10; j++) {
            scanf(" %d", &balls[j]);
        }
        puts(solve(balls, 0, 10, 0, 0) ? "YES" : "NO");
    }
}

