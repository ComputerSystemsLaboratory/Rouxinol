#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int n,i,max=0;
  int data[101];

  for(i=0;i<=100;i++){
    data[i]=0;
  }
  
  while(scanf("%d",&n)!=EOF){
    data[n]++;
  }
  
  for(i=1;i<=100;i++){
    if(max<data[i]){
      max=data[i];
    }
  }

  for(i=1;i<=100;i++){
    if(max==data[i]){
      printf("%d\n",i);
    }
  }
  
  return(0);
}