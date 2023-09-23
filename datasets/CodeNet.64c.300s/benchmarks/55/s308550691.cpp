#include <cstdio>
#define loop_input(fmt,...) while(~scanf(fmt,__VA_ARGS__))

int main() {
    int a, i = 0;
    loop_input("%d", &a) {
        if (a == 0) break;
        printf("Case %d: %d\n", ++i, a);
    }
    return 0;
}
