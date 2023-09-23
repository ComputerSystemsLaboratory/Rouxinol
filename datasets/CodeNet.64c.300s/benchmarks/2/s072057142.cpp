#include <stdio.h>
int main(void){
   while(1){
       int m,f,r;
       scanf("%d%d%d",&m,&f,&r);
       
       if(m==-1&&f==-1&&r==-1)
       break;
       else if(m==-1||f==-1||m+f<30)
       printf("F\n");
       else if(m+f>=80)
       printf("A\n");
       else if(m+f>=65)
       printf("B\n");
       else if(m+f<50&&r<50)
       printf("D\n");
       else
       printf("C\n");
   }
    return 0;
}