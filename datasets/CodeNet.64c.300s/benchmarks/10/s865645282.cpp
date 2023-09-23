#include <stdio.h>

int main(void){
    int m, n, tmp;

    scanf("%d %d", &m, &n);
    while (n != 0 || m!=0){
        if (m > n){
            tmp = m; m = n; n = tmp;
        }
        printf("%d %d\n", m, n);
        scanf("%d %d", &m, &n);
    }
    return 0;
}