#include <cstdio>
#include <iostream>
using namespace std;

int main(void)
{
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

    return 0;
}