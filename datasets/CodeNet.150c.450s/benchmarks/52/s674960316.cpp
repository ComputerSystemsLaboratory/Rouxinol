#include<iostream>
int main(){
  int stuck[10000];
  int a,count=0;
  while(std::cin>>a){
    if(a!=0){
      stuck[count]=a;
      count++;
    }else{
      std::cout<<stuck[count-1]<<"\n";
      count--;
    }
  }
}