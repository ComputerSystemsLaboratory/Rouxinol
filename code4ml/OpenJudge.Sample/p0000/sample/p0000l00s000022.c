
#include<stdio.h>
int main(void)
{
    int a[10],M=0,i,j;
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<9;j++){
        for(i=0;i<9-j;i++){
            if(a[i]<a[i+1]){
               M=a[i];
               a[i]=a[i+1];
               a[i+1]=M;
            }

        }
    }
    printf("\n");
    for(j=0;j<3;j++){
        printf("%d\n",a[j]);
    }
    return 0;
}