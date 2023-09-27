#include <stdio.h>
#define MAX 30

int main(void){
    int w,n, tmp;
    int a,b;
    int lot[MAX+1]; // 1-origin

    scanf("%d", &w);
    scanf("%d", &n);
    for (int i=1; i<=w; i++) lot[i] = i;
    for (int i=1; i<=n; i++){
        scanf("%d,%d", &a, &b);
        tmp = lot[a];
        lot[a] = lot[b];
        lot[b] = tmp;
    }
    for (int i=1; i<=w; i++){
        printf("%d\n", lot[i]);
    }

    return 0;
}