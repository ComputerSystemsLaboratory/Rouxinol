#include <stdio.h>

int main(void) {
    int a, b;
    char buf[8];
    while(~scanf("%d %d", &a, &b)) {
        printf("%d\n", sprintf(buf, "%d", a + b));
    }
    return 0;
}