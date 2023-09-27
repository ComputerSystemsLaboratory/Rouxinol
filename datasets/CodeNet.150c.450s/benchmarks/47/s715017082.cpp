#include <stdio.h>
int main()
{
    int w, h, x, y, r;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
    if (x >= r && y >= r && (w - x) >= r\
        && (h - y) >= r) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}