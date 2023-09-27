#include <stdio.h>

int main(void)
{
    int n;
    int i;

    scanf("%d", &n);
    printf("%d:", n);
    for (i = 2; i * i <= n; i++){
        while (n % i == 0){
            printf(" %d", i);
            n /= i;
        }
    }
    if (n != 1){
        printf(" %d", n);
    }
    printf("\n");

    return (0);
}