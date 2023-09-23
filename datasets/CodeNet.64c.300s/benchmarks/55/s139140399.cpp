#include<stdio.h>
int main(void){
int i=0,x;
scanf("%d",&x);
while(x!=0){ 
printf("Case %d: %d\n",i+1,x);
scanf("%d",&x);
i++;
}

return 0;
}