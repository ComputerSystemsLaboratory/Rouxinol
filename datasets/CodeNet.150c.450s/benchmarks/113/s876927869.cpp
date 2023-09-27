#include <stdio.h>

int main(void)
{
    static int i = 0;
    int n;
   
    while(1) {
        scanf("%d", &n);
        if ( n == 0) {
            break;
        } else {
            i++;
            printf("Case %d: %d\n", i, n);
        }
    }

    return 0;
}