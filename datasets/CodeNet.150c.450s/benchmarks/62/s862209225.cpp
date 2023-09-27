#include <iostream>
#include <stdio.h>

int main() {
    int a, b, c;
    int result[3];

    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        result[0] = b;
        result[1] = a;
    } else {
        result[0] = a;
        result[1] = b;
    }

    if (c > result[1]) {
        result[2] = c;
    } else if (c > result[0]) {
        result[2] = result[1];
        result[1] = c;
    } else {
        result[2] = result[1];
        result[1] = result[0];
        result[0] = c;
    }

    printf("%d %d %d\n", result[0], result[1], result[2]);

    return 0;
}