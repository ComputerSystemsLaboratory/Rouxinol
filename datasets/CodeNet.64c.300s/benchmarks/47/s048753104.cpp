#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
  int j,k;
  int v[200]={0};
  int a;
  int max=0;

  while((scanf("%d",&a)!=EOF)){
    v[a-1]++;
  }

  for(k=0;k<100;k++){
    if(max < v[k])
      max = v[k];
  }
  for(k=0;k<100;k++){
    if(v[k]==max)
      printf("%d\n",k+1);
  }
  return 0;
}
    
    
  