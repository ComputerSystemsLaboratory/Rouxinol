#include<stdio.h>
#define KETA 119
int main(void){

    int a[KETA];
    int b[KETA];
    int i,x,kuri=1,kaisuu;
    
    for(i=0;i<KETA;i++) a[i]=0;
    scanf("%d",&kaisuu);
    for(x=1;x<=kaisuu;x++){
        for(i=KETA-1;i>=0;i--){
            b[i]=(a[i]*x+kuri)%10;
            kuri=(a[i]*x+kuri)/10;
        }
        
        for(i=0;i<KETA;i++) a[i]=b[i];
        for(i=0;i<KETA;i++) b[i]=0;
    }
	    for(i=0;a[i]==0&&i<KETA;i++);
        if(i==12) printf("0");
        for(;i<KETA;i++){
            printf("%d",a[i]);
        }
        printf("\n");
        
    return 0;
}