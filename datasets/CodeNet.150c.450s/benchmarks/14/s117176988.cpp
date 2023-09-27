#include<cstdio>
int main(void){
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++){
if(i%3==0)printf(" %d",i);
else if(i%10==3)printf(" %d",i);
else if((i/10)%10==3)printf(" %d",i);
else if((i/100)%10==3)printf(" %d",i);
else if((i/1000)%10==3)printf(" %d",i);
}
printf("\n");
return 0;
}