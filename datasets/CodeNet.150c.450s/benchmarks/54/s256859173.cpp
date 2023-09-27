#include<iostream>
#include<string>
#include<algorithm>
 
int main(){
  int count=0;
  std::string W;
  std::cin>>W;
  std::string str;
  while(1){
    std::cin>>str;
    if(str=="END_OF_TEXT")break;
    std::transform(str.begin(),str.end(),str.begin(),tolower);
    if(str==W){
      count++;
    }
  }
  std::cout<<count<<std::endl;
  return 0;
}
