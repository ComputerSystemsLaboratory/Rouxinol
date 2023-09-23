#include <stdio.h>

int main(void) {
    
    unsigned int s;
    unsigned int m;
    unsigned int h;
    scanf("%d", &s);

    m = s / 60;
    h = m / 60;
    m = m % 60;
    s = s % 60;

    printf("%d:%d:%d\n", h, m, s);
}