#include<iostream>
#include<cstdio>

int a;
int main(){
int i = 1;
while(1){

scanf("%d",&a);
if(a == 0)
break;
printf("Case %d: %d\n",i++,a);
}
return 0;
}