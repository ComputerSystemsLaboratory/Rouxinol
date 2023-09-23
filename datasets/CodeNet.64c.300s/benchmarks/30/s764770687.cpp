#include<stdio.h>

int main(){
  
  while(1){
    
    int n,cnt=0;
  
  scanf("%d",&n);
  
  if(n==0){break;}

  n=1000-n;
  
  while(n>=500){
    n-=500;
    cnt++;
  }
  while(n>=100){
    n-=100;
    cnt++;
  }
  while(n>=50){
    n-=50;
    cnt++;
  }
  while(n>=10){
    n-=10;
    cnt++;
  }
  while(n>=5){
    n-=5;
    cnt++;
  }
  while(n!=0){
    n--;
    cnt++;
  }

  printf("%d\n",cnt);
  
  }
  
  return 0;
}