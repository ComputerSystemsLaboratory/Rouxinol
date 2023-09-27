#include<iostream>
#include<string>
int main(){
  std::string in;
  int cnt;
  while(1){
    cnt = 0;
    std::cin >> in;
    if(in[0] == '0') break;
    for(int i=0; i<in.length(); i++) cnt += in[i] - '0';
    std::cout << cnt << std::endl;
  }
  return 0;
}