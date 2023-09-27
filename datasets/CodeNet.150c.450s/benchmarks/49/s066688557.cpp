#include<stdio.h>
int main(){
  int n,a[100],i,max=0,min=1000,c;
  while(1){
    c=0;
    max=0;
    min=1000;
    scanf("%d",&n);
    if(n==0)break;
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      if(max<a[i])max=a[i];
      if(min>a[i])min=a[i];
    }
    for(i=0;i<n;i++){
      c+=a[i];
    }
    c-=max+min;
    printf("%d\n",c/(n-2));
  }
  return 0;
}