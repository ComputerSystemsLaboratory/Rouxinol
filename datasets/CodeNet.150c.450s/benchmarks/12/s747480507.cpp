#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 1; i <= n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 1; i <= n; i++){
        printf("node %d: key = %d, ", i, a[i]);
        if(i/2 >= 1){
            printf("parent key = %d, ", a[i/2]);
        }
        if(i*2 <= n){
            printf("left key = %d, ", a[2*i]);
            if(i*2+1 <= n){
                printf("right key = %d, ", a[2*i+1]);
            }
        }
        printf("\n");
    }

    return 0;
}
