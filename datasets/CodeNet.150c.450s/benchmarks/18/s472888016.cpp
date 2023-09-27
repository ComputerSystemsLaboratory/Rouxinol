#include<stdio.h>
#include<math.h>
int main(){
int a,i;
double b=100,d=0,c=0;
scanf("%d",&a);
for(i=0;i<a;i++){
b*=1.05;
b+=0.9999;
double c=floor(b);
b=c;
}
printf("%d\n",(int)b*1000);
}