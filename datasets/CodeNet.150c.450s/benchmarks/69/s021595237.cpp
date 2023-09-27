#include <cstdio>
#define loop(var,time) for (var = 0; var < (time); var++)
int balls[10];

bool dfs(int right, int left, int index) {\
    if (index == 10) { return true; }
    if (balls[index] > right) {
        if (dfs(balls[index], left, index + 1)) { return true; }
    }
    if (balls[index] > left) {
        if (dfs(right, balls[index], index + 1)) { return true; }
    }
    return false;
}

int main() {
    int n;
    int tmp,i;
    scanf("%d", &n);
    loop(tmp, n) {
        loop(i,10) {
            scanf("%d", &balls[i]);
        }
        if (dfs(0,0,0)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}