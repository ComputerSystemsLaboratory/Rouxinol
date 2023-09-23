#include<stdio.h>
int main(){
int a,b,c,z=0;
scanf("%d %d %d",&a,&b,&c);
for(int i=a;a<b+1;a++){
if(c%a==0)z++;
}
printf("%d\n",z);
}