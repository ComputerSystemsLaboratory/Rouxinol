// Aizu Vol0 0002: Digit Number
// 2018.09.08
 
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
 
#define MAX 8
int max[MAX] = {
    0,
    0,
    10,
    100,
    1000,
    10000,
    100000,
    1000000
};
 
int main()
{
    int a, b, c;
    int i;
 
    while (scanf("%d%d", &a, &b) == 2) {
        c = a + b;
        for (i = MAX - 1; i >= 0; i--) {
            if (c >= max[i]) break;
        }
        putchar('0' + i);
        putchar('\n');
    }
    return 0;
}
