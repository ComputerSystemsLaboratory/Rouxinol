// Lec08-C Counting Characters
#include<iostream>
#include<string>
#include<cstdio>
int main(){
  int cnt[26]={};
  std::string str;
  while(std::getline(std::cin, str)){
    for(int i=0; i<str.length(); i++){
      if(str[i] >= 'A' && str[i] <= 'z'){
        str[i] < 'a' ? cnt[str[i]-65]++ : cnt[str[i]-65-32]++;
      }
    }
  }
  for(char c='a'; c<='z'; c++){
    std::cout << c << " : " << cnt[c-65-32] << std::endl;
  }
  return 0;
}