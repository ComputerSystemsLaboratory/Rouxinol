#include<stdio.h>

int main()
{
    int a, b;
    while (scanf("%d", &a) != EOF) {
        scanf("%d", &b);
        a = a + b;
        b = 1;
        while(a / 10 > 0) {
            a = a / 10;
            b += 1;
        }            
        printf("%d\n", b);
    }
    return 0;
}