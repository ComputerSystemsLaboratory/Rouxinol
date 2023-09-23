#include <stdio.h>

int main(void){
    int n;
    int i=1;

    scanf("%d", &n);
    while (n != 0){
        printf("Case %d: %d\n", i, n);
        scanf("%d", &n);
        i++;
    }
    return 0;
}