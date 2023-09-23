#include <stdio.h>

int main(void)
{
    int i, n, x;
    i = 1;
    x = i;
    scanf("%d", &n);

    while (i <= n) {
        x = i;
        if(x%3==0) 
            printf(" %d", i);
        else {
            while(x) {
                if(x%10==3) {
                    printf(" %d", i);
                    break;
                } else
                    x/=10;
            }
        }
        i = i+1;
    }
    printf("\n");

    return 0;
}