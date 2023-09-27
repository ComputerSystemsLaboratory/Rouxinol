#include <stdio.h>
#include <math.h>
#define N 10000

int isPrime(int);

int main(){

  int i,j,n,x,key,count=0;
  int a[N];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<n;i++){
    if(isPrime(a[i])){
     
      count++;
    }
  }
  
  
  printf("%d\n",count);
  
  return 0;
}
  
int isPrime(int x){

  int i;
  if(x<=1) return 0;

  for(i=2;i*i<=x;i++){
    if(x%i==0){
      return 0;
    }
  }

  return 1;
}