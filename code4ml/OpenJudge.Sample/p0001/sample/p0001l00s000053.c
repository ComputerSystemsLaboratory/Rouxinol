#include <stdio.h>

int main(void){
    
    int a,b,n,i;
    
    
    while(scanf("%d%d",&a,&b)!=EOF){
        i=0;
        n=0;
        n=a+b;
        while(n!=0){
            i++;
            n=(n/10);}
        
        printf("%d\n",i);
    }
    
    return 0;
}