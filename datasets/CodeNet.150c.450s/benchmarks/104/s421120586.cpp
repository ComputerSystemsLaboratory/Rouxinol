#include<iostream>
#include<stdio.h>

int main(){

  int w,n,a,b,tmp;
  std::cin >> w >> n;

  int tate[w];

  for(int i=0;i<w;i++){
    tate[i]=i+1;
  }

  for(int i=0;i<n;i++){
    scanf(" %d,%d",&a,&b);
    tmp = tate[a-1];
    tate[a-1] = tate[b-1];
    tate[b-1] = tmp;
  }

  for(int i=0;i<w;i++){
    std::cout << tate[i] << std::endl;
  }


}