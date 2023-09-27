#include<stdio.h>
int main(){
int a,b;
scanf("%d",&a);
if(a<60){
printf("0:0:%d\n",a);
}
else if(a<3600){
printf("0:%d:%d\n",a/60,a-(a/60*60));
}
else{
b=(a-(a/3600*3600))/60;
printf("%d:%d:%d\n",a/3600,b,(a-(a/3600*3600))-b*60);
}
}