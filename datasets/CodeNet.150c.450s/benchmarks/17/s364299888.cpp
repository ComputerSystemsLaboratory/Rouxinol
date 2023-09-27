#include <stdio.h>

int main(void)
{
    int i, j, t, a[5];
    for(i=0; i<5; i++) scanf("%d", &a[i]);

    for(i=0; i<5; i++) {
        for(j=0; j<4; j++) {
            if(a[j] < a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
    return (0);
}