#include<stdio.h>
int main(void){
int a;
for(int i=1;;i++){
scanf("%d",&a);
if(a!=0) printf("Case %d: %d\n",i,a);
else break;
}
return 0;
}