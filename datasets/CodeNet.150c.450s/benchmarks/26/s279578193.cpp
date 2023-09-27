#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
printf("a %s b\n",a-b?a>b?">":"<":"==");
return 0;
}