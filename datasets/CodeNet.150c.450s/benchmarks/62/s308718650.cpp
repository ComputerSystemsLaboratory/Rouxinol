#include<stdio.h>
int main(){
    int a[3];
    int i,j,tmp;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=0;i<3;i++){
        for(j=1;i<=j;j--){
            if(a[j]>a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    printf("%d %d %d\n",a[0],a[1],a[2]);
    return 0;
}