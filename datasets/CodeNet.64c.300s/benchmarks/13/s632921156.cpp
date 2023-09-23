#include<stdio.h>

int main(void){
    int i, n, F[45] = {};
    scanf("%d", &n);

    F[0] = 1;
    F[1] = 1;

    for(i=2;i<=n;i++) F[i] = F[i-2] + F[i-1];

    printf("%d\n", F[n]);

    return 0;
}


