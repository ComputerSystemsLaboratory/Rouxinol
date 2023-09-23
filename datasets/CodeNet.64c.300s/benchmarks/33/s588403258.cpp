#include <stdio.h>
int main(void){
while(1){
    int a,b,c;
    char x;
    scanf("%d%*c%c%d",&a,&x,&b);
    if(x=='?')
    break;
    
    if(x=='+')
    c=a+b;
    else if(x=='-')
    c=a-b;
    else if(x=='*')
    c=a*b;
    else
    c=a/b;
    
    printf("%d\n",c);
    
}
return 0;
}