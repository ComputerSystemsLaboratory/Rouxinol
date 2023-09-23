#include<stdio.h>

int main(){
int ask;
scanf("%d",&ask);
for(int i=1;i<ask+1;i++){
if(i%3==0)printf(" %d",i);
else if(i%10==3)printf(" %d",i);
else if(i/10%10==3)printf(" %d",i);
else if(i/100%10==3)printf(" %d",i);
else if(i/1000%10==3)printf(" %d",i);
}
printf("\n");
}