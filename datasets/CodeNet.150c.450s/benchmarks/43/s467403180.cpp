#include<stdio.h>
int main(void){
    int loop,a,b,c=0,d=0;
while(1){ scanf("%d",&loop);
    if(loop==0)break;
    
    	a=0,b=0,c=0,d=0;
    for(;loop--;){
        scanf("%d %d",&a,&b);
        if(a!=b){
            if(a>b){
                c+=a+b;
            }else{
                d+=a+b;
            }
        }else{
            c+=a;
            d+=b;
        }
    }
    printf("%d %d\n",c,d);
}
    return 0;
}