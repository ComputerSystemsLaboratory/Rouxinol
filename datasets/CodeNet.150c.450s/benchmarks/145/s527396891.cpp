#include<map>
#include<iostream>

int main(void){
  std::map<std::string,int> table;
  std::string max_freq="";
  std::string max_length="";
  std::string input;
  while(std::cin>>input){
    if(input.size()>max_length.size())
      max_length=input;
    table[input]++;
    if(table[input]>table[max_freq])
      max_freq=input;
  }
  std::cout<<max_freq<<' '<<max_length<<std::endl;
  return 0;
}
