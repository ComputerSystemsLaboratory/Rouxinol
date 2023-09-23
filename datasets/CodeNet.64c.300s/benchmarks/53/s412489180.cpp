#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    static int j = 0;
    while (a <= b) {
        if (c % a == 0) j++;
        a++;
    }
    printf("%d\n", j);
}