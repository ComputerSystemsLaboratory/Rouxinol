#include<stdio.h>
int main(void){
int n,max=-1000001,min=1000001;
long long sum=0;
scanf("%d",&n);
if(0<n&&n<=10000){
int i;
long number;
for(i=0;i<n;i++){
if(scanf("%ld",&number)==1){
if(-1000000>number||number>1000000)
return 0;
sum+=number;
if(max<number)
max=number;
if(min>number)
min=number;
}}
printf("%d %d %ld\n",min,max,sum);
}
return 0;
}