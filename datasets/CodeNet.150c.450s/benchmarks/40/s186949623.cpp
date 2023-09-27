#include <stdio.h>
int main(){
    int a[6],temp;
    char c;
    for(int i=0;i<6;i++)scanf("%d",&a[i]);
    while(scanf("%c",&c)!=EOF){
        if(c=='E'){
            temp=a[0];
            a[0]=a[3];
            a[3]=a[5];
            a[5]=a[2];
            a[2]=temp;
        }
        if(c=='W'){
            temp=a[0];
            a[0]=a[2];
            a[2]=a[5];
            a[5]=a[3];
            a[3]=temp;
        }
        if(c=='N'){
            temp=a[0];
            a[0]=a[1];
            a[1]=a[5];
            a[5]=a[4];
            a[4]=temp;
        }
        if(c=='S'){
            temp=a[0];
            a[0]=a[4];
            a[4]=a[5];
            a[5]=a[1];
            a[1]=temp;
        }
    }
    printf("%d\n",a[0]);
}