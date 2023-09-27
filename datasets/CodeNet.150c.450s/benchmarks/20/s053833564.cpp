#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
int h = a/3600;
int m =( a - h*3600)/60;
int s =a -h*3600 -m*60;
printf("%d:%d:%d\n",h,m,s);
return 0;
}