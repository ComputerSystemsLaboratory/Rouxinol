// Lec08-D Ring
#include<iostream>
#include<string>
int main(){
  std::string str1, str2;
  std::getline(std::cin, str1);
  std::getline(std::cin, str2);
  int str1_len=str1.length(), str2_len=str2.length(),tmp;
  bool jdg;
  for(int i=0; i<str1_len; i++){
    jdg = 0;
    for(int j=0; j<str2_len; j++){
      i+j<str1_len ? tmp=i+j : tmp=i+j-str1_len;
      if(str1[tmp] != str2[j]) break;
      if(str2_len == j + 1) jdg = 1;
    }
    if(jdg) break;
  }
  std::cout << (jdg ? "Yes" : "No") << std::endl;
  return 0;
}