#include <iostream>
#include <stdio.h>

int main() {
    int a, b;
    const char *sign;

    scanf("%d %d", &a, &b);
    if (a < b) {
        sign = "<";
    } else if (a > b) {
        sign = ">";
    } else {
        sign = "==";
    }

    printf("a %s b\n", sign);

    return 0;
}