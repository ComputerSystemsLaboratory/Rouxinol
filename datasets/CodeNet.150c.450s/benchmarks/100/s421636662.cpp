#include<stdio.h>
int main(void){
long long int a,ans,i;
ans=1;
scanf("%lld",&a);
for(i=1;i<=a;i++){
    ans=ans*i;
}
printf("%lld\n",ans);
return 0;
}