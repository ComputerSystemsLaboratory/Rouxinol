#include <stdio.h>

int main(void)
{
    int i = 1;
    int x;
    while(1) {
        scanf("%d", &x);
        if (x == 0) {
            break;
        } else {
            printf("Case %d: %d\n", i, x);
            ++i;
        }
    }
    return 0;
}