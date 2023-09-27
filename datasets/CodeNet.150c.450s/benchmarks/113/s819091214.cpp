#include<stdio.h>
int main(){
int a[10000],i=0;
do{
scanf("%d",&a[i]);
}while(a[i++]!=0);
for(int b=0;b<i-1;b++){
printf("Case %d: %d\n",b+1,a[b]);
}
}