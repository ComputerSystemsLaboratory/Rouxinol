#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
#if 0
    int i;
    int x, y;

    for (;;) {
        if (scanf("%d %d", &x, &y) == EOF) {
            break;
        }
        x += y;
        for (i = 1; ; i++) {
            x /= 10;
            if (x == 0) {
                break;
            }
        }
        printf("%d\n", i);
    }
#else
    int i;
    int x, y;
    char st[10];

    for (;;) {
        if (scanf("%d %d", &x, &y) == EOF) {
            break;
        }
        x += y;
        sprintf(st, "%d", x);
        printf("%d\n", strlen(st));
    }
#endif
    return 0;
}