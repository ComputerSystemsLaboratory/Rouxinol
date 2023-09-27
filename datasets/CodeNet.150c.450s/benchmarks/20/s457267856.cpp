#include <stdio.h>

int main(void){
    int num=0;
    scanf("%d",&num);
    
    int h=num/3600;
    int m=(num/60)%60;
    int s=num%60;
    
    printf("%d:%d:%d\n",h,m,s);
    
    return 0;
    
}
