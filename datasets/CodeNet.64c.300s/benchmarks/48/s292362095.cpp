#include <stdio.h>
#include <math.h>
#include <string.h>

#define M 1000001

int main(void)
{
    int x, i, j;
    int p[M];
    
    for (i = 0; i < M; i++) {
        p[i] = 1;
    }
    p[0] = p[1] = 0;
    for (i = 2; i * i < M; i++) {
        if (p[i] == 1) {
            for (j = i * i; j < M; j += i) {
                p[j] = 0; 
            }
        }
    } 
    for (i = 0; i < M-1; i++) {
        p[i+1] += p[i];
    }
    while (scanf("%d", &x) != EOF) {
        printf("%d\n", p[x]);
    } 
    return (0);
}