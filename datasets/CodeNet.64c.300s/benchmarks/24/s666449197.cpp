#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    int i;
    int num, x, y;
    int p1 = 0;
    int p2 = 0;

    for (;;) {
        scanf("%d", &num);
        if (num == 0) {
            break;
        }

        for (i = 0; i < num; i++) {
            scanf("%d %d", &x, &y);
            if (x > y) {
                p1 += (x+y);
            }
            else if (x < y) {
                p2 += (x+y);
            }
            else {
                p1 += x;
                p2 += y;
            }
        }
        printf("%d %d\n", p1, p2);
        p1 = p2 = 0;
    }

    return 0;
}