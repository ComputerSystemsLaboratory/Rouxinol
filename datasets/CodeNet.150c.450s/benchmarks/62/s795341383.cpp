#include <stdio.h>
   
int main(){
   
    int a[3] = {0};
    int b[3] = {0};
   
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    if (a[0] < a[1]){
        b[0] = 0;
        b[1] = 1;
    }else{
        b[0] = 1;
        b[1] = 0;
    }

    if (a[2] < a[b[0]]){
        b[2] = b[1];
        b[1] = b[0];
        b[0] = 2;
    }else if (a[2] < a[b[1]]){
        b[2] = b[1];
        b[1] = 2;
    }else{
        b[2] = 2;
    }
   
 
    printf("%d %d %d\n", a[b[0]], a[b[1]], a[b[2]]);
   
   
    return 0;
   
}