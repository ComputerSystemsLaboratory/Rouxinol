#include<stdio.h>
int main(){
int q,r,i,a[10],sum[]={0,0,0};
for(q=0;q<10;q++)
scanf("%d",&a[q]);

for(i=0;i<10;i++){
if(sum[0]<=a[i])
sum[0]=a[i];
}

for(i=0;i<10;i++){
if(sum[1]<=a[i]&&a[i]<sum[0])
sum[1]=a[i];
}

for(i=0;i<10;i++){
if(sum[2]<=a[i]&&a[i]<sum[1])
sum[2]=a[i];
}
for(r=0;r<3;r++)
printf("%d\n",sum[r]);
return 0;
}