#include<stdio.h>
 
int main(void){
 int n,a[1000],i,j,b,c,min;
 
 while(1){
  scanf("%d",&n);
 
  if(n==0){
   break;
  }
  for(i=0;i<n;i++){
   scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++){
   for(j=n-1;j>i;j--){
    if(a[j-1]<a[j]){
     b=a[j-1];a[j-1]=a[j];a[j]=b;
    }
   }
  }
  min=a[0];
  for(i=0;i<n-1;i++){
   c=a[i]-a[i+1];
   if(min>c){
    min=c;
   }
  }
  printf("%d\n",min);
 }
}