/* AOJ0002 Digit Number */
 
#include <stdio.h>
 
int sum_digits(int n, int base)
{
    int count = 0;
 
    while(n) {
        count++;
        n /= base;
    }
 
    return count;
}
 
int main(void)
{
    int a, b;
 
    while(~scanf("%d%d", &a, &b))
        printf("%d\n", sum_digits(a + b, 10));
 
    return 0;
}

