#include<stdio.h>

int main(void)
{

int i;
int a,b,c;
int ans=0;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

for(i=a;i<=b;i++){
if(c%i==0){
ans++;
}
}
printf("%d\n",ans);

return 0;
}