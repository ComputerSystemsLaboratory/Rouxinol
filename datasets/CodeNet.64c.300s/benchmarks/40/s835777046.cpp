#include <stdio.h>
int main(void){
while(1){
    int x;
    x=getchar();
    
    if(x==-1)
    break;
    else if(65<=x&&90>=x)
    x+=32;
    else if(97<=x&&122>=x)
    x-=32;
  
    putchar(x);
}
printf("\0\n");

    return 0;
}