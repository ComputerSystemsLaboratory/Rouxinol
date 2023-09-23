#include<stdio.h>
int main(){
  long long int sum;
  int a,n,i,min,max;
  scanf("%d",&n);
  scanf("%d",&a);
  min=max=sum=a;
  for(i=1;i<n;i++){
    scanf("%d",&a);
    sum+=a;
    if(min>a){
      min=a;
    }
    if(max<a){
      max=a;
    }
  }
  printf("%d %d %ld\n",min,max,sum);
  return(0);
}