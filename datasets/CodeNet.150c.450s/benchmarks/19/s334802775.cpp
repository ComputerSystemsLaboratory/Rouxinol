#include <cstdio>
#define loop_input(fmt,...) while(~scanf(fmt,__VA_ARGS__))

int main() {
    int a, b;
    loop_input("%d%d", &a, &b) {
        if (a == 0 && b == 0) break;
        if (a > b)  a ^= b ^= a ^= b;
        printf("%d %d\n", a, b);
    }
    return 0;
}
