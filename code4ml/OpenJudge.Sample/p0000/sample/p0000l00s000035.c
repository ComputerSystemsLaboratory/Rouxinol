#include<stdio.h>
int a[10];
void paixu(){
int i,j,t;
for(i=1;i<10;i++){
j=i-1;
t=a[i];
while((a[j]>t)&&(j>=0)){
a[j+1]=a[j];
j--;
}
a[j+1]=t;
}
}
int main(){
int i;
for(i=0;i<=9;i++)scanf("%d",&a[i]);
paixu();
printf("%d\n%d\n%d",a[9],a[8],a[7]);
return 0;
}