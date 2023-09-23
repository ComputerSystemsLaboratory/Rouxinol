#include <cstdio>

int main () {
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    //W = 2, H = 4, x = 2, y = 2, r = 1;
    int c_left = x - r;
    int c_right = x + r;
    int c_up = y + r;
    int c_bottom = y - r;

    if (0 <= c_left && 0 <= c_bottom && c_right <= W && c_up <= H) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}