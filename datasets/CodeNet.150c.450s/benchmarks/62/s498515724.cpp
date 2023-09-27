#include <stdio.h>

int main(void) {
    int i, j, a[3], tmp;

    scanf("%d %d %d",&a[0],&a[1],&a[2]); 

    for (i=0; i<2; i++) {
        for (j=0; j<2; j++) {
            if(a[j] >= a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    printf("%d %d %d\n", a[0], a[1], a[2]);
    return 0;
}