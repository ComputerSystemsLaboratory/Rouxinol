#include <cstdio>
#define loop_input(fmt,...) while(~scanf(fmt,__VA_ARGS__))

int main() {
    int W, H, x, y, r;
    loop_input("%d%d%d%d%d", &W, &H, &x, &y, &r) {
        if ((r <= x && x <= W-r) && (r <= y && y <= H-r)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    return 0;
}
