#include <stdio.h>

int main(void)
{
    int k, l;
    scanf("%d %d", &k, &l);
    
    int a[k][l], b[l], c[k];//k x l * l x 1
    int i, j;

    /*initialize a, b, c */
    for (i = 0; i < k; ++i) {
        for (j = 0; j < l; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < l; ++i) {
        scanf("%d", &b[i]);
    }
    
    for (i = 0; i < k; ++i) {
        c[i] = 0;
    }
    //calc
    for (i = 0; i < k; ++i) {
        for (j = 0; j < l; ++j) {
            c[i] += a[i][j] * b[j];
        }
    }
    //output
    for (i = 0; i < k; ++i) {
        printf("%d\n", c[i]);
    }
    return 0;
}