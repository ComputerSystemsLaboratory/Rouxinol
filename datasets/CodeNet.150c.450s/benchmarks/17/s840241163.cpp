#include <stdio.h>

int main(){
    int a[5],tmp;
    int i,j;
    for(i=0;i<5;i++)scanf("%d",&a[i]);
    for(i=0;i<5;i++){
        for(j=4;j>i;j--){
            if(a[i]<a[j]){
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d",a[i]);
        printf((i-4)? " " : "\n");
    }
}