#include<iostream>

int main(){
  int num[101]={};
  int number,max;

  while(std::cin >> number){
    ++num[number];
  }
  max = 0;
  for(int i=1;i<101;i++){
    if(num[i]>max){
      max = num[i];
    }
  }
  for(int i=1;i<101;i++){
    if(num[i]==max){
      std::cout << i << std::endl;
    }
  }
}