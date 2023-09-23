#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int f[n+2];
    f[0] = 1;
    f[1] = 1;
    for(int i = 2; i <= n; i++) f[i] = f[i-1] + f[i-2];
    printf("%d\n", f[n]);
    return 0;
}
