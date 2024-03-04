#include<stdio.h>

int main(){
    int a[10];
    int i,x,y,z;
    x=0;y=0;z=0;
    for(i=0;i<10;i++) scanf("%d",&a[i]);
    for(i=0;i<10;i++){
                      if(x<a[i]) x=a[i];
                      }
    for(i=0;i<10;i++){
                      if((y<a[i])&&(a[i]<x)) y=a[i];
                      }
    for(i=0;i<10;i++){
                      if((z<a[i])&&(a[i]<y)) z=a[i];
                      }
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d",z);
    return 0;
}