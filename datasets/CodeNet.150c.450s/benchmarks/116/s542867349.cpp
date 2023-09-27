#include<stdio.h>
#include <iostream>
int length;
int k;
int* a;
//int sum;
int main(){
  while(1){
  std::cin>>length;
  std::cin>>k;
    if(k==0&&length==0)return 0;
  a=new int[length];
  for(int i=0;i<length;i++){
    int input=0;
    std::cin>>input;
    a[i]=input;
  }
  int* sums=new int[length];
  int s=0;
  for(int i=0;i<length;i++){
    s+=a[i];
    sums[i]=s;
  }
    //std::cout<<"\n";
  int max=0;
  int psum=0;
    int idx=0;
  for(int i=0;i<length-k;i++){
    int diff=sums[i+k]-sums[i];
    if(diff>max){
      max=diff;
      idx=i;
      
    //std::cout<<"\n";
    }
      //std::cout<<diff;
  }
  std::cout<<max;
    std::cout<<"\n";
  //std::cout<<std::to_string(idx)+"\n";
  //std::cout<<s;
  }
  return 0;
}
