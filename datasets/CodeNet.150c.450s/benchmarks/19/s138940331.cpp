#include <stdio.h>

int main(void)
{
    int x, y;
    while(1) {
        scanf("%d %d", &x, &y);

        if (x == 0 && y == 0) {
            break;
        }else if ( x < y) {
            printf("%d %d\n", x, y);
        }else {
            printf("%d %d\n", y, x);
        }
    }
}