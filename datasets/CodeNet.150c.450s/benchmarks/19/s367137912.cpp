#include<stdio.h>
int main(){
int a[3001][2],i=0;
do{
scanf("%d %d",&a[i][0],&a[i][1]);
i++;
}while(a[i-1][0]!=0||a[i-1][1]!=0);
for(int b=0;b<i-1;b++){
if(a[b][0]<=a[b][1])printf("%d %d\n",a[b][0],a[b][1]);
else if(a[b][0]>a[b][1])printf("%d %d\n",a[b][1],a[b][0]);
}
}